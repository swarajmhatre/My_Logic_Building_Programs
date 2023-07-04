#include <iostream>
using namespace std;

typedef class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int iValue)
    {
        data = iValue;
        next = NULL;
    }
} NODE, *PNODE;

class Stack
{
private:
    PNODE First;
    int iCount;

public:
    Stack();

    void Push(int iNo); // InsertLast
    int Pop();          // DeleteFirst
    void Display();
    int Count();
};
Stack::Stack()
{
    First = NULL;
    iCount = 0;
}
void Stack::Push(int iNo)
{
    PNODE newn = new NODE(iNo);

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while ((temp->next != NULL))
        {
            temp = temp->next;
        }
        temp->next = newn;
        iCount++;
    }
}
int Stack::Pop()
{
    int Value = 0;
    if (iCount == 0)
    {
        cout << "Stack is empty\n";
        return -1;
    }
    else if (iCount == 1)
    {
        Value = First->data;
        delete First;
        First = NULL;
    }
    else
    {
        Value = First->data;
        PNODE temp = First;
        First = First->next;
        delete temp;
    }
    iCount--;
    return Value;
}
void Stack::Display()
{
    cout << "\nTHe elements of Stack are: ";

    PNODE temp = First;
    for (int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}
int Stack::Count()
{
    return iCount;
}
main()
{

    return 0;
}