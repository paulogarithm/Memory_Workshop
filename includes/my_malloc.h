/*
** EPITECH PROJECT, 2023
** Memory_Workshop
** File description:
** malloc
*/

#ifndef MALLOC_H_
    #define MALLOC_H_

    #include <stddef.h>
    #include <stdbool.h>

typedef struct s_meta meta_t;

struct s_meta {
    bool freed;
    size_t size;
    struct s_meta *next;
    char ptr[1];
};

#endif /* !MALLOC_H_ */
