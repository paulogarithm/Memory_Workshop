#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>
#include <iso646.h>

#include "my_malloc.h"

meta_t *heap = NULL;

static bool check_for_heap(meta_t **meta, size_t size)
{
    meta_t *current = heap;

    while (current != NULL) {
        if (current->freed and current->size <= size) {
            current->size = size;
            current->freed = false;
            *meta = current;
            return true;
        }
        current = current->next;
    }
    return false;
}

static void erase_data(void *ptr, size_t size)
{
    char *ptr_str = (char *)ptr;

    for (size_t n = 0; n < size; ++n)
        ptr_str[n] = '\0';
}

void free(void *ptr)
{
    meta_t *current = heap;

    while (current != NULL) {
        if ((intptr_t)(current + sizeof(meta_t)) == (intptr_t)ptr) {
            current->freed = true;
            erase_data(current + sizeof(meta_t), current->size);
            return;
        }
        current = current->next;
    }
}

void *malloc(size_t size)
{
    meta_t *meta = NULL;

    if (check_for_heap(&meta, size))
        return meta;
    meta = sbrk(0);
    if ((intptr_t)(sbrk(sizeof(meta_t) + (intptr_t)size)) < 0)
        return NULL;
    meta->freed = false;
    meta->next = heap;
    meta->size = size;
    heap = meta;
    return meta + sizeof(meta_t);
}
