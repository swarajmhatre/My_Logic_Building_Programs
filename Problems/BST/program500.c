#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
} NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (1)
        {
            if (No == temp->data)
            {
                printf("\nDuplicate element found. Unable to insert!");
                free(newn);
                break;
            }
            else if (No > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if (No < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
        }
    }
}

bool Search(PNODE Head, int No)
{
    bool flag = false;
    if (Head == NULL)
    {
        printf("\nTree is empty!");
        return flag;
    }

    while (Head != NULL)
    {
        if (No == Head->data)
        {
            flag = true;
            break;
        }
        else if (No > Head->data)
        {
            Head = Head->rchild;
        }
        else if (No < Head->data)
        {
            Head = Head->lchild;
        }
    }
    return flag;
}

int CountNodes(PNODE Head){
    static int iCnt =0;
    if(Head != NULL){
        iCnt++;
        CountNodes(Head->lchild);
        CountNodes(Head->rchild);
    }
    return iCnt;
}



void PreOrder(PNODE Head)
{
    if (Head != NULL)
    {
        printf("%d\t", Head->data);
        PreOrder(Head->lchild);
        PreOrder(Head->rchild);
    }
}

void PostOrder(PNODE Head)
{
    if (Head != NULL)
    {
        PostOrder(Head->lchild);
        PostOrder(Head->rchild);
        printf("%d\t", Head->data);
    }
}

void InOrder(PNODE Head)
{
    if (Head != NULL)
    {
        InOrder(Head->lchild);
        printf("%d\t", Head->data);
        InOrder(Head->rchild);
    }
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    Insert(&First, 21);
    Insert(&First, 25);
    Insert(&First, 15);
    Insert(&First, 78);
    Insert(&First, 56);
    Insert(&First, 10);
    Insert(&First, 55);
    Insert(&First, 34);
    Insert(&First, 20);

    printf("\nElements int PreOrder Format are: \n");
    PreOrder(First);

    printf("\nElements int PostOrder Format are: \n");
    PostOrder(First);

    printf("\nElements int InOrder Format are: \n");
    InOrder(First);


    bRet = Search(First, 516);
    if(bRet){
        printf("\nElement is there in BST\n");
    }
    else{
        printf("\nElement is not there in BST");
    }
    

    printf("\nThe number of nodes in the tree are: %d", CountNodes(First));
    return 0;
}