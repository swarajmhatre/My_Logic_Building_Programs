#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL))
    { // LL is empty
        *Head = newn;
        *Tail = newn;
    }
    else
    { // LL contains atleast one node
        newn->next = *Head;
        (*Head) = newn;
    }
    (*Tail)->next = *Head;
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL))
    { // LL is empty
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
    else
    { // LL contains atleast one node
        (*Tail)->next = newn;
        *Tail = newn; // ALso (*Tail) = (*Tail)->next
    }
    (*Tail)->next = *Head;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if ((*Head == *Tail))
    {
        free(*Head);
        *Head = NULL;
        *Tail == NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if ((*Head == *Tail))
    {
        free(*Head);
        *Head = NULL;
        *Tail == NULL;
    }
    else
    {
        PNODE temp;

        temp = *Head;
        while (temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);

        *Tail = temp;
        (*Tail)->next = *Head;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if ((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | =>", Head->data);
            Head = Head->next;
        } while (Head != Tail->next);
        printf("\n");
    }
    else
    {
        printf("Linked List is Empty!");
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if ((Head != NULL) && (Tail != NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head != Tail->next);
        return iCnt;
    }
    else
    {
        return 0;
    }
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    int iLength = 0;
    PNODE temp = NULL;
    int iCnt = 0;
    PNODE newn = NULL;

    iLength = Count(*Head, *Tail);

    if ((iPos < 1) || (iPos > (iLength + 1)))
    {
        printf("\nInvalid Position!");
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(Head, Tail, No);
    }
    else if (iPos == (iLength + 1))
    {
        InsertLast(Head, Tail, No);
    }
    else
    {
        temp = *Head;
        for (iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;
    }
}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int iLength = 0;
    PNODE temp = *Head;
    PNODE tempX = NULL;
    int iCnt = 0;
    iLength = Count(*Head, *Tail);

    if ((iPos < 1) || (iPos > iLength))
    {
        printf("\nInvalid Position!");
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst(Head, Tail);
        printf("INt");
    }
    else if (iPos == (iLength + 1))
    {
        DeleteLast(Head, Tail);
        printf("INt2");
    }
    else
    {

        for (iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        tempX = temp->next;
        temp->next = temp->next->next;
        free(tempX);
    }
}
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL; // #

    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);

    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 121);
    InsertLast(&First, &Last, 111);

    Display(First, Last);
    iRet = Count(First, Last);

    printf("\nThe number of nodes in the Linked List: %d\n", iRet);

    InsertAtPos(&First, &Last,55, 4);

    Display(First, Last);
    iRet = Count(First, Last);

    printf("\nThe number of nodes in the Linked List: %d\n", iRet);

    DeleteAtPos(&First, &Last, 4);

    Display(First, Last);
    iRet = Count(First, Last);

    printf("\nThe number of nodes in the Linked List: %d\n", iRet);

    DeleteFirst(&First, &Last);
    DeleteLast(&First, &Last);

    Display(First, Last);
    iRet = Count(First, Last);

    printf("\nThe number of nodes in the Linked List: %d\n", iRet);
    return 0;
}