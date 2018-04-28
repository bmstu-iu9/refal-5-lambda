#ifndef RefalRTS_DYNAMIC_H_
#define RefalRTS_DYNAMIC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "refalrts.h"


//==============================================================================
// Динамическое связывание
//==============================================================================

namespace refalrts {

// Использовать class, public и private нельзя — требуется статическая
// инициализация:
//   X x = { ... };
struct Module {
  IdentReference *list_idents;
  unsigned int next_ident_id;
  ExternalReference *list_externals;
  unsigned int next_external_id;
};

extern struct Module g_module;

// Использовать class, public и private нельзя — требуется статическая
// инициализация:
//   X x = { ... };
struct Dynamic {
  static UInt32 one_at_a_time(UInt32 init, const char *bytes, size_t length);

  template <typename Key>
  struct HashKeyTraits {
    /* ничего */
  };

  template <typename Key, typename Value>
  class DynamicHash {
    // Копирование запрещено
    DynamicHash(const DynamicHash&);
    DynamicHash& operator=(const DynamicHash&);
  public:
    DynamicHash();
    ~DynamicHash();

    size_t count() const {
      return m_count;
    }

    Value *alloc(Key key);
    Value *lookup(Key key);

  private:
    struct Node {
      UInt32 hash;
      Value value;
      typename DynamicHash<Key, Value>::Node *next;

      Node(UInt32 hash, Node *next)
        : hash(hash)
        , value()
        , next(next)
      {
        /* пусто */
      }
    };

    typedef typename DynamicHash<Key, Value>::Node *NodePtr;
    enum { cResizeThreshold = 4 };

    void rehash();

    Node **m_table;
    unsigned int m_table_power;
    size_t m_count;
  };

  struct IdentHashNode {
    RefalIdentDescr ident;
    const char *nonstatic_origin;

    IdentHashNode()
      : ident()
      , nonstatic_origin(0)
    {
      /* пусто */
    }

    void cleanup() {
      if (nonstatic_origin) {
        delete [] nonstatic_origin;
      }
    };

    const char *key() const {
      return ident.name();
    }
  };

  struct FuncHashNode {
    RefalFunction *function;

    FuncHashNode()
      : function(0)
    {
      /* пусто */
    }

    void cleanup() {
      // Деструкторов (в т.ч. неявных в функциях нет),
      // память выделялась только malloc’ом, поэтому освобождаем free()
      free(function);
    }

    RefalFuncName key() const {
      return function->name;
    }
  };

  struct ConstTable {
    UInt32 cookie1;
    UInt32 cookie2;
    FunctionTableItem *externals;
    FunctionTable *function_table;
    RefalIdentifier *idents;
    RefalNumber *numbers;
    StringItem *strings;
    RASLCommand *rasl;

    char *external_memory;
    char *idents_memory;
    char *strings_memory;

    ConstTable *next;

    RefalFuncName make_name(const char *name) const;
  };

  struct FunctionTable *m_unresolved_func_tables;
  DynamicHash<RefalFuncName, FuncHashNode> *m_funcs_table;
  struct ConstTable *m_tables;
  DynamicHash<const char *, IdentHashNode> *m_idents_table;
  RefalIdentifier *m_native_identifiers;
  RefalFunction **m_native_externals;

  // Нет конструктора, должен инициализироваться статически

  DynamicHash<const char *, IdentHashNode>& idents_table();

  size_t idents_count();

  void free_idents_table();
  IdentHashNode *alloc_ident_node(const char *name);

  void load_native_identifiers();
  RefalIdentifier operator[](const IdentReference& ref) const {
    return m_native_identifiers[ref.id];
  }

  DynamicHash<RefalFuncName, FuncHashNode>& funcs_table();
  unsigned find_unresolved_externals();
  void free_funcs_table();

  RefalFunction* operator[](const ExternalReference& ref) const {
    return m_native_externals[ref.id];
  }

  template <typename T>
  static T *malloc(size_t count = 1) {
    T *result = static_cast<T*>(::malloc(sizeof(T) * count));
    assert(count == 0 || result);
    return result;
  }

  void enumerate_blocks();
  void cleanup_module();

  bool seek_rasl_signature(FILE *stream);
  const char *read_asciiz(FILE *stream);
  void read_counters(unsigned long counters[]);
};

extern struct Dynamic g_dynamic;

}  // namespace refalrts


//------------------------------------------------------------------------------
// Хеш-таблица
//------------------------------------------------------------------------------

template <typename Key, typename Value>
refalrts::Dynamic::DynamicHash<Key, Value>::DynamicHash()
  : m_table()
  , m_table_power(5)
  , m_count(0)
{
  size_t table_size = size_t(1) << m_table_power;
  m_table = new DynamicHash<Key, Value>::NodePtr[table_size];

  for (size_t i = 0; i < table_size; ++i) {
    m_table[i] = 0;
  }
}

template <typename Key, typename Value>
refalrts::Dynamic::DynamicHash<Key, Value>::~DynamicHash() {
  size_t table_size = size_t(1) << m_table_power;
  for (size_t i = 0; i < table_size; ++i) {
    Node *node = m_table[i];
    while (node != 0) {
      node->value.cleanup();
      Node *next = node->next;
      delete node;
      node = next;
    }
  }

  delete[] m_table;
  m_table = 0;
}

template <typename Key, typename Value>
Value * refalrts::Dynamic::DynamicHash<Key, Value>::alloc(Key key) {
  // Хаки для Watcom
  using refalrts::UInt32;

  rehash();

  UInt32 hash = HashKeyTraits<Key>::hash(key);
  UInt32 hash_mask = (UInt32(1) << m_table_power) - 1;

  Node **pstart_node = &m_table[hash & hash_mask];
  Node *return_node = *pstart_node;
  while (
    return_node != 0
    && (
      return_node->hash != hash
      || ! HashKeyTraits<Key>::equal(return_node->value.key(), key)
    )
  ) {
    return_node = return_node->next;
  }

  if (return_node == 0) {
    return_node = new Node(hash, *pstart_node);
    *pstart_node = return_node;
    ++m_count;
  }

  return &return_node->value;
}

template <typename Key, typename Value>
Value *refalrts::Dynamic::DynamicHash<Key, Value>::lookup(Key key) {
  // Хаки для Watcom
  using refalrts::UInt32;

  UInt32 hash = HashKeyTraits<Key>::hash(key);
  UInt32 hash_mask = (UInt32(1) << m_table_power) - 1;

  Node *return_node = m_table[hash & hash_mask];
  while (
    return_node != 0
    && (
      return_node->hash != hash
      || ! HashKeyTraits<Key>::equal(return_node->value.key(), key)
    )
  ) {
    return_node = return_node->next;
  }

  if (return_node != 0) {
    return &return_node->value;
  } else {
    return 0;
  }
}

template <typename Key, typename Value>
void refalrts::Dynamic::DynamicHash<Key, Value>::rehash() {
  // Хаки для Watcom
  using refalrts::UInt32;

  size_t table_size = size_t(1) << m_table_power;

  if (m_count / table_size < cResizeThreshold) {
    return;
  }

  unsigned int new_table_power = m_table_power + 1;
  size_t new_table_size = size_t(1) << new_table_power;
  UInt32 hash_mask = (UInt32(1) << new_table_power) - 1;
  Node **new_table = new DynamicHash<Key, Value>::NodePtr[new_table_size];

  for (size_t i = 0; i < new_table_size; ++i) {
    new_table[i] = 0;
  }

  for (size_t i = 0; i < table_size; ++i) {
    Node *node = m_table[i];
    while (node != 0) {
      Node *next_in_old_table = node->next;
      Node **pnext_in_new_table = &new_table[node->hash & hash_mask];
      node->next = *pnext_in_new_table;
      *pnext_in_new_table = node;
      node = next_in_old_table;
    }
  }

  m_table_power = new_table_power;
  m_table = new_table;
}

//------------------------------------------------------------------------------
// Идентификаторы
//------------------------------------------------------------------------------

namespace refalrts {

template <>
struct Dynamic::HashKeyTraits<const char*> {
  static UInt32 hash(const char *name) {
    size_t length = name ? strlen(name) : 0;
    return one_at_a_time(0, name, length);
  }

  static bool equal(const char *left, const char *right) {
    return strcmp(left, right) == 0;
  }
};

}  // namespace refalrts

//------------------------------------------------------------------------------
// Функции
//------------------------------------------------------------------------------

namespace refalrts {

template <>
struct Dynamic::HashKeyTraits<refalrts::RefalFuncName> {
  static UInt32 hash(const RefalFuncName& name) {
    size_t length = name.name ? strlen(name.name) : 0;
    return one_at_a_time(name.cookie1 ^ name.cookie2, name.name, length);
  }

  static bool equal(const RefalFuncName& left, const RefalFuncName& right) {
    return left.cookie1 == right.cookie1
      && left.cookie2 == right.cookie2
      && strcmp(left.name, right.name) == 0;
  }
};

}  // namespace refalrts


#endif  // RefalRTS_DYNAMIC_H_
