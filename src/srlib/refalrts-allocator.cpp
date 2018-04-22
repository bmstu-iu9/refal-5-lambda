#include <stdio.h>
#include <stdlib.h>

#include <assert.h>

#include "refalrts-utils.h"

//FROM refalrts-allocator
#include "refalrts-allocator.h"


//==============================================================================
// Распределитель памяти
//==============================================================================

bool refalrts::Allocator::alloc_node(refalrts::Iter& node) {
  if ((m_free_ptr == & m_last_marker) && ! create_nodes()) {
    return false;
  } else {
    if (refalrts::cDataClosure == m_free_ptr->tag) {
      refalrts::Iter head = m_free_ptr->link_info;
      -- head->number_info;

      if (0 == head->number_info) {
        unwrap_closure(m_free_ptr);
        // теперь перед m_free_ptr находится "развёрнутое" замыкание
        m_free_ptr->tag = refalrts::cDataClosureHead;
        m_free_ptr->number_info = 407193; // :-)

        m_free_ptr = head;
      }
    }

    node = m_free_ptr;
    m_free_ptr = next(m_free_ptr);
    node->tag = refalrts::cDataIllegal;
    return true;
  }
}

refalrts::Iter refalrts::Allocator::free_ptr() {
  return m_free_ptr;
}

void refalrts::Allocator::splice_to_freelist(
  refalrts::Iter begin, refalrts::Iter end
) {
  reset_allocator();
  m_free_ptr = list_splice(m_free_ptr, begin, end);
}

refalrts::Iter refalrts::Allocator::splice_from_freelist(refalrts::Iter pos) {
  if (m_free_ptr != m_first_marker.next) {
    return list_splice(pos, m_first_marker.next, m_free_ptr->prev);
  } else {
    return pos;
  }
}

bool refalrts::Allocator::create_nodes() {
  refalrts::NodePtr new_node = m_pool.alloc_node();

#ifdef MEMORY_LIMIT

  if (m_memory_use >= MEMORY_LIMIT) {
    return false;
  }

#endif // ifdef MEMORY_LIMIT

  if (new_node == 0) {
    return false;
  } else {
    refalrts::NodePtr before_free_ptr = prev(m_free_ptr);
    before_free_ptr->next = new_node;
    new_node->prev = before_free_ptr;

    m_free_ptr->prev = new_node;
    new_node->next = m_free_ptr;

    m_free_ptr = new_node;
    m_free_ptr->tag = refalrts::cDataIllegal;
    ++ m_memory_use;

    return true;
  }
}

void refalrts::Allocator::free_memory() {
  m_pool.free();
#ifndef DONT_PRINT_STATISTICS
  fprintf(
    stderr,
    "Memory used %d nodes, %d * %lu = %lu bytes\n",
    m_memory_use,
    m_memory_use,
    static_cast<unsigned long>(sizeof(Node)),
    static_cast<unsigned long>(m_memory_use * sizeof(Node))
  );
#endif // ifndef DONT_PRINT_STATISTICS
}

refalrts::NodePtr refalrts::Allocator::Pool::alloc_node() {
  if ((m_avail != 0) || grow()) {
    -- m_avail;
    return m_pnext_node++;
  } else {
    return 0;
  }
}

bool refalrts::Allocator::Pool::grow() {
  ChunkPtr p = static_cast<ChunkPtr>(malloc(sizeof(Chunk)));
  if (p != 0) {
    p->next = m_pool;
    m_pool = p;
    m_avail = cChunkSize;
    m_pnext_node = p->elems;
    return true;
  } else {
    return false;
  }
}

void refalrts::Allocator::Pool::free() {
  while (m_pool != 0) {
    ChunkPtr p = m_pool;
    m_pool = m_pool->next;
    ::free(p);
  }
}

void refalrts::Allocator::read_counters(unsigned long counters[]) {
  counters[cPerformanceCounter_HeapSize] =
    static_cast<unsigned long>(memory_use() * sizeof(Node));
}
