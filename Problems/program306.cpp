#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

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

void SinglyLL ::InsertAtPos(int iNo, int iPos)
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

void SinglyLL ::DeleteFirst()
{
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

void SinglyLL ::DeleteAtPos(int iPos)
{
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

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;
    int iRet = 0;

    // cout<< obj1.iCount;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.Display();
    iRet = obj1.Count();

    cout << "number of elements are : " << iRet << endl;

    obj2.InsertFirst(20);
    obj2.InsertFirst(10);
    obj2.InsertLast(30);

    obj2.Display();
    iRet = obj2.Count();

    cout << "number of elements are : " << iRet << endl;
    return 0;
}