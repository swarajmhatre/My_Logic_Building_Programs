#include <stdio.h>
#include <stdlib.h>

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

void PreOrder(PNODE Head){
    if(Head !=  NULL){
        printf("%d\t", Head->data);
        PreOrder(Head->lchild);
        PreOrder(Head->rchild);
    }
}

void PostOrder(PNODE Head){
    if(Head !=  NULL){
        PostOrder(Head->lchild);
        PostOrder(Head->rchild);
        printf("%d\t", Head->data);
    }
}

void InOrder(PNODE Head){
    if(Head !=  NULL){
        InOrder(Head->lchild);
        printf("%d\t", Head->data);
        InOrder(Head->rchild);
    }
}


int main()
{
    PNODE First = NULL;

    Insert(&First, 21);
    Insert(&First, 25);
    Insert(&First, 15);
    

    printf("\nElements int PreOrder Format are: \n");
    PreOrder(First);

    printf("\nElements int PostOrder Format are: \n");
    PostOrder(First);

    printf("\nElements int InOrder Format are: \n");
    InOrder(First);



    return 0;
}