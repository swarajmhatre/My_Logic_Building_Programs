#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev; // #
} NODE, *PNODE, **PPNODE;


int main()
{
    PNODE First = NULL;

    return 0;
}