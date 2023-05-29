/*
** EPITECH PROJECT, 2023
** Memory Workshop
** File description:
** memory
*/

#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "my_malloc.h"

void *malloc(size_t size);
void free(void *ptr);

int main(int argc, char *argv[])
{
    char *str = malloc(sizeof(char) * 15);

    strcpy(str, "Hello world !");
    printf("%s %p\n", str, str);
    printf("%s %p\n", str, str);

    free(str);
    printf("%s %p\n", str, str);

    str = malloc(sizeof(char) * 12);
    printf("%s %p\n", str, str);
    
    return 0;
}
