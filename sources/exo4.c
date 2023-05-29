#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

#include "my_malloc.h"

void *heap = NULL;

void *exo4(size_t size)
{
    meta_t *meta = sbrk(0);

    if ((intptr_t)(sbrk(sizeof(meta_t) + (intptr_t)size)) < 0)
        return NULL;
    meta->freed = false;
    meta->next = heap;
    meta->size = size;
    heap = meta;
    return meta + sizeof(meta_t);
}