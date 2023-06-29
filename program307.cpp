#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE;

class SinglyLL
{
    PNODE First; // Characteristics;
    int iCount;  // Characteristics;
public:
    SinglyLL();
    ~SinglyLL();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

    void Display();
    int Count();
};

// Implementations of all behaviours
/*
Return_Value CLass_Name :: Function_Name (Parameters){
    Function Body;
}
*/

void SinglyLL ::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE; // newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if (First == NULL)
    { // LL is Empty
        First = newn;
    }
    else // LL contains at least one node in it
    {
        /* code */
        newn->next = First;
        First = newn;
    }

    iCount++;
}

void SinglyLL ::InsertLast(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE; // newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if (First == NULL)
    { // LL is Empty
        First = newn;
    }
    else // LL contains at least one node in it
    {
        /* code */
        PNODE temp = First;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

void SinglyLL ::DeleteFirst()
{
    if (First == NULL)
    { // EMpty LL
        return;
    }
    else if (First->next == NULL) // only one node
    {
        delete First;
        First = NULL;
    }
    else
    { // More than one node in LL
        PNODE temp = First;
        First = First->next;
        delete temp;
    }
    iCount--;
}

void SinglyLL ::DeleteLast()
{
    if (First == NULL)
    { // EMpty LL
        return;
    }
    else if (First->next == NULL) // only one node
    {
        delete First;
        First = NULL;
    }
    else
    { // More than one node in LL
        PNODE temp = First;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}


void SinglyLL ::Display()
{
    PNODE temp = First;

    cout << "Elements of Linked List are: ";
    while (temp != NULL)
    {
        cout << "| " << temp->data << " |->";
        temp = temp->next;
    }
    cout << "NULL"
         << "\n";
}

int SinglyLL ::Count()
{
    return iCount;
}

SinglyLL ::SinglyLL()
{
    cout << "Inside Constructor.\n";
    First = NULL;
    iCount = 0;
}

SinglyLL ::~SinglyLL()
{
    cout << "Inside Destructor.\n";
}

void SinglyLL ::InsertAtPos(int iNo, int iPos)
{
    if ((iPos < 1) || (iPos > (iCount + 1)))
    {
        cout << "\nInvalid Position.";
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == (iCount + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE temp = First;
        for (int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyLL ::DeleteAtPos(int iPos)
{
    if((iPos<1)|| (iPos> (iCount))){
        cout<<"\nInvalid Input";
        return;
    }
    if(iPos == 1){
        DeleteFirst();
    }
    else if(iPos == iCount){
        DeleteLast();
    }
    else{
        PNODE temp = First;
        PNODE tempX = NULL;

        for(int iCnt =1; iCnt < (iPos-1); iCnt++){
            temp= temp->next;
        }
        tempX = temp->next;
        temp->next = temp->next->next;
        delete tempX;
        iCount--;
    }

}
int main()
{
    SinglyLL obj1;
    int iRet = 0;

    // cout<< obj1.iCount;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.Display();
    obj1.InsertAtPos(55, 4);
    obj1.Display();
    obj1.DeleteAtPos(4);

    obj1.Display();
    iRet = obj1.Count();

    cout << "number of elements are : " << iRet << endl;

    obj1.DeleteFirst();
    obj1.DeleteLast();
    obj1.Display();
    iRet = obj1.Count();

    cout << "number of elements are : " << iRet << endl;
    return 0;
}