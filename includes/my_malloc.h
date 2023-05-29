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

typedef struct s_node node_t;

struct s_node {
    bool freed;
    size_t size;
    void *ptr;
    struct s_node *next;
};

#endif /* !MALLOC_H_ */
