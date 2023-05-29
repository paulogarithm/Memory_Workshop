/*
** EPITECH PROJECT, 2023
** Memory_Workshop
** File description:
** malloc
*/

#ifndef MALLOC_H_
    #define MALLOC_H_

    #include <stddef.h>

typedef struct s_node node_t;

struct s_node {
    size_t size;
    void *ptr;
    struct s_node *next;
};

typedef struct s_heap {
    node_t *beggin;
} heap_t;

#endif /* !MALLOC_H_ */
