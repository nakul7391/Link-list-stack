#ifndef STACK_H
#define STACK_H

// prototype of the link list

typedef struct Slist {
char *str;            // holder to store string
struct Slist *next;   // store next address
} Slist_t;

// return status stack empty full
typedef enum {
Full,
Empty,
Success,
Failure
} stack_status;

// function to create node of the link list
Slist_t *create_node(char *str);

// push function for stack
stack_status push(Slist_t **top, char *str);

// pop function for stack
stack_status pop(Slist_t **top, char **str);

// peek function for stack
stack_status peek(Slist_t **top, char **str);

#endif
