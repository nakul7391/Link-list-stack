#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

// allocates memory in heap and store data
Slist_t *create_node(char *str)
{
    Slist_t *new = malloc(sizeof(Slist_t));

    // if no memory is available stack is full
    if (new == NULL)
    return Full;

    // create node and insert data
    new->str = strdup(str);
    new->next = NULL;
    return new;
}

// similar to insert at first in single link list
stack_status push(Slist_t **top, char *str)
{
    // if there is no top create top
    if (*top == NULL)
    {
        Slist_t *new = create_node(str);

        if (new == NULL)
        return Full;

        *top = new;
        return Success;
    }

    // update top
    Slist_t *new = create_node(str);

    if (new == NULL)
    return Full;

    new->next = *top;
    *top = new;
    return Success;
}

// delete node from the stack similar to delete first
stack_status pop(Slist_t **top, char **str)
{
    // if there is no top return empty
    if (*top == NULL)
    return Empty;

    Slist_t *ptr = *top;
    // copy data in string
    *str = strdup(ptr->str);

    *top = ptr->next;
    free(ptr);
    return Success;
}

// peek function return the top most dat without modifying the stack
stack_status peek(Slist_t **top, char **str)
{
    if ( *top == NULL )
    return Empty;

    *str = strdup((*top)->str);
    return Success;
}
