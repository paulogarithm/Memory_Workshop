#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

#include "my_malloc.h"

void *heap = NULL;

void *exo4(size_t size)
{
    void *ptr = sbrk((intptr_t)size + sizeof(node_t));
    
    if ((intptr_t)ptr < 0)
        return NULL;
    return ptr;
}