#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

// Allocate memory for new node
// Initialize the new node
// Check whether LL is empty or not
// If LL is empty store the address of New node in First
// Otherwise, store the address of
//
void InsertFirst(PPNODE Head, int No)
{
    PNODE newn;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("ELements of the Linked List are: ");

    while (Head != NULL)
    {
        printf("| %d | ->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}


int main()
{
    PNODE First = NULL;
    
    return 0;
}