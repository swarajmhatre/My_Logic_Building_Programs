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

void InsertLast(PPNODE Head, int No)
{
    PNODE newn;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *Head;

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
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

int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if (*Head == NULL) // LL is Empty
    {
        return;
    }
    else if ((*Head)->next == NULL) // LL contains one node
    {
        free(*Head);
        *Head = NULL;
    }
    else // LL contains more than one node
    {
        *Head = (*Head)->next;
        free(temp);
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if (*Head == NULL) // LL is Empty
    {
        return;
    }
    else if ((*Head)->next == NULL) // LL contains one node
    {
        free(*Head);
        *Head = NULL;
    }
    else // LL contains more than one node
    {
        while ((temp->next->next) != NULL) // Type 3
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);

    PNODE temp = *Head;
    PNODE newn = NULL;
    int iCnt = 0;

    if ((iPos < 1) || (iPos > iLength + 1))
    {
        printf("Invalid Position!\n");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(Head, No);
    }
    else if (iPos == (iLength + 1))
    {
        InsertLast(Head, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for (iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        // Sequence is imp
        newn->next = temp->next;
        temp->next = newn;
    }
}

// --------------------------------------------------------------------------------------------

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);

    PNODE temp = *Head;
    PNODE tempX = NULL;
    int iCnt = 0;

    if ((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid Position!\n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if (iPos == (iLength + 1))
    {
        DeleteLast(Head);
    }
    else
    {
        for (iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        tempX = temp->next;
        // Sequence is IMP
        temp->next = temp->next->next;
        free(tempX);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 51);
    InsertLast(&First, 101);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes are: %d\n", iRet);

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes are: %d\n", iRet);

    InsertAtPos(&First, 25, 5);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes are: %d\n", iRet);

    DeleteAtPos(&First, 5);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes are: %d\n", iRet);

    DeleteFirst(&First);
    DeleteFirst(&First);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes are: %d\n", iRet);

    DeleteLast(&First);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes are: %d\n", iRet);
    return 0;
}