/*
** EPITECH PROJECT, 2023
** Memory Workshop
** File description:
** memory
*/

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

bool exo1(void);
void *exo3(size_t size);

int main(int argc, char *argv[])
{
    char *str = my_malloc(sizeof(char) * 10);
    str[0] = 'A';
    str[1] = '\0';
    printf("%s\n", str);
    return 0;
}
