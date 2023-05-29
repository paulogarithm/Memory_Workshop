#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

void *exo3(size_t size)
{
    void *ptr = sbrk((intptr_t)size);
    
    if ((intptr_t)ptr < 0)
        return NULL;
    return ptr;
}