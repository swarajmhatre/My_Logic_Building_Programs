#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Display(PNODE Head)
{
    //
}

int Count(PNODE Head)
{
    return 0;
}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    // ALlocate the memory for new node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialize new node
    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    { // LL is empty
        *Head = newn;
    }
    else
    { // LL Contains at least one node
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;

    // ALlocate the memory for new node
    newn = (PNODE)malloc(sizeof(NODE));

    // Initialize new node
    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    { // LL is empty
    }
    else
    { // LL Contains at least one node
    }
}
void InsertAtPos(PPNODE Head, int No, int Pos) {}
void DeleteFirst(PPNODE Head) {}
void DeleteLast(PPNODE Head) {}
void DeleteAtPos(PPNODE Head, int Pos) {}
int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    return 0;
}