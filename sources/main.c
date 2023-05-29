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

    char *str2 = malloc(sizeof(char) * 4);

    strcpy(str2, "Wow");
    printf("%s %p\n", str2, str2);

    free(str);
    printf("%s %p\n", str, str);

    str = malloc(sizeof(char) * 12);
    printf("%s %p\n", str, str);

    free(str2);
    free(str);
    return 0;
}
