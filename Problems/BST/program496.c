#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); // 1

    newn->data = no; // 2
    newn->next = NULL;

    if (*Head == NULL) // 3
    {
        *Head = newn; // 4
    }
    else
    {
        newn->next = *Head; // 5
        *Head = newn;       // 6
    }
}

void DisplayI(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d\t", Head->data);
        Head = Head->next;
    }
}
void DisplayR(PNODE Head)
{
    if (Head != NULL)
    {
        printf("%d\t", Head->data);
        DisplayR(Head->next);
    }
}

int CountI(PNODE Head){
    int iCnt =0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int CountR(PNODE Head){
    static int iCnt =0;
    if (Head != NULL)
    {
        iCnt++;
        CountR(Head->next);
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet =0;

    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    DisplayI(First);
    DisplayR(First);

    iRet = CountI(First);
    printf("\nCount: %d", iRet);
    iRet = CountR(First);
    printf("\nCount: %d", iRet);


    return 0;
}