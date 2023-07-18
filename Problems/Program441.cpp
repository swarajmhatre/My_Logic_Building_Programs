#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Structure for Singly Linear and Singly Circular

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Structure for Doubly Linear and Doubly Circular

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Class of SIngly Linear LL

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class SinglyLL
{
public:
    struct NodeS<T> *first;
    int iCount;

    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    cout << "Elements of Singly Linear Linked List are: \n";

    NodeS<T> *temp = first;

    while (temp != NULL)
    {
        cout << "|" << temp->data << "| -> ";
        temp = temp->next;
    }
    cout << "NULL"
         << "\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
    NodeS<T> *newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
    NodeS<T> *newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        NodeS<T> *temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int iPos)
{
    int iCount = Count();
    if ((iPos < 1) || (iPos > iCount + 1))
    {
        cout << "Invalid Position!\n";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(no);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {

        NodeS<T> *newn = new NodeS<T>;

        newn->data = no;
        newn->next = NULL;
        NodeS<T> *temp = first;

        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeS<T> *temp = first;

        first = first->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeS<T> *temp = first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int iCount = Count();
    if ((iPos < 1) || (iPos > iCount))
    {
        cout << "Invalid Position!\n";
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount + 1)
    {
        DeleteLast();
    }
    else
    {

        NodeS<T> *temp1 = first;
        NodeS<T> *temp2 = first;

        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next->next;
        delete temp1->next;
        temp1->next = temp2;

        iCount--;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Class of Singly Circluar LL

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class SinglyCL
{
public:
    struct NodeS<T> *first;
    struct NodeS<T> *last;
    int iCount;

    SinglyCL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{

    if ((first != NULL) && (last != NULL))
    {
        NodeS *temp = first; 
        do
        {
            printf("| %d | =>", temp->data);
            temp = temp->next;
        } while (temp != last->next);
        printf("\n");
    }
    else
    {
        printf("Linked List is Empty!");
    }
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
}

template <class T>
void SinglyCL<T>::InsertLast(T no)
{
}

template <class T>
void SinglyCL<T>::InsertAtPos(T no, int iPos)
{
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Class of Dooubly Linear LL

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class DoublyLL
{
public:
    struct NodeD<T> *first;
    int iCount;

    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
DoublyLL<T>::DoublyLL() {}

template <class T>
void DoublyLL<T>::Display()
{
}

template <class T>
int DoublyLL<T>::Count()
{
    return 0;
}

template <class T>
void DoublyLL<T>::InsertFirst(T no)
{
}

template <class T>
void DoublyLL<T>::InsertLast(T no)
{
}

template <class T>
void DoublyLL<T>::InsertAtPos(T no, int iPos)
{
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Class of Doubly Circluar LL

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class DoublyCL
{
public:
    struct NodeD<T> *first;
    struct NodeD<T> *last;
    int iCount;

    DoublyCL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
DoublyCL<T>::DoublyCL() {}

template <class T>
void DoublyCL<T>::Display()
{
}

template <class T>
int DoublyCL<T>::Count()
{
    return 0;
}

template <class T>
void DoublyCL<T>::InsertFirst(T no)
{
}

template <class T>
void DoublyCL<T>::InsertLast(T no)
{
}

template <class T>
void DoublyCL<T>::InsertAtPos(T no, int iPos)
{
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Entry point function

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    SinglyLL<int> obj1;
    SinglyCL<int> obj2;
    DoublyLL<int> obj3;
    DoublyCL<int> obj4;

    return 0;
}