#ifndef RefalRTS_ALLOCATOR_H_
#define RefalRTS_ALLOCATOR_H_

#include "refalrts.h"
#include "refalrts-diagnostic-config.h"


namespace refalrts {

class Allocator {
  class Pool {
  public:  // BCC 5.5 не может скомпилировать с private
    enum { cChunkSize = 1000 };

  private:
    struct Chunk {
      Chunk *next;
      Node elems[cChunkSize];
    };

    typedef Chunk *ChunkPtr;

    ChunkPtr m_pool;
    unsigned m_avail;
    Node *m_pnext_node;

  public:
    Pool();

    NodePtr alloc_node();
    void free();
    bool grow();
  };

  Node m_first_marker;
  Node m_last_marker;
  NodePtr m_free_ptr;

  Pool m_pool;
  unsigned m_memory_use;
  DiagnosticConfig *m_diagnostic_config;

public:
  Allocator(DiagnosticConfig *diagnostic_config);

  void reset_allocator() {
    m_free_ptr = m_first_marker.next;
  }

  bool alloc_node(Iter& node);
  Iter free_ptr();
  void splice_to_freelist(Iter begin, Iter end);
  Iter splice_from_freelist(Iter pos);
  void free_memory();

  unsigned memory_use() const {
    return m_memory_use;
  }

  // Используются только в отладочной печати
  NodePtr first_marker() {
    return & m_first_marker;
  }
  NodePtr last_marker() {
    return & m_last_marker;
  }

  void read_counters(double counters[]);

private:
  bool create_nodes();
};

inline Allocator::Pool::Pool()
  : m_pool(0)
  , m_avail(0)
  , m_pnext_node(0)
{
  /* пусто */
}

inline Allocator::Allocator(DiagnosticConfig *diagnostic_config)
  : m_first_marker(0, & m_last_marker)
  , m_last_marker(& m_first_marker, 0)
  , m_free_ptr(& m_last_marker)
  , m_pool()
  , m_memory_use(0)
  , m_diagnostic_config(diagnostic_config)
{
  /* пусто */
}

}  // namespace refalrts


#endif  // RefalRTS_ALLOCATOR_H_
