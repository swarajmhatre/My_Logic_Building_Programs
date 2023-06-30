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
    int Pop();          // DeleteLast
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
    }
        iCount++;
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
        PNODE temp = First;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Value = temp->next->data;
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
    return Value;
}
void Stack::Display()
{
    if(First == NULL){
        cout<<"Nothing to Display as stack is empty.\n";
    return;
    }
    cout << "\nThe elements of Stack are:\n ";

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
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Stack obj;

    cout << "________________________________________________________________________\n";

    cout << "\nDynamic implementation of stack.\n";
    cout << "________________________________________________________________________\n";

    while (iChoice != 0)
    {
        cout << "_________________________________________________________________\n";
        cout << "Please enter the option: \n";

        cout << "1: Push element into stack\n";
        cout << "2: Pop element from the stack\n";
        cout << "3: Display elements from stack\n";
        cout << "4: Count number of elements from stack\n";
        cout << "0: Terminate the application.\n";
        cout << "_________________________________________________________________\n";

        cout << "PLease enter the option: \n";
        cin >> iChoice;

        switch (iChoice)
        {
        case 1:
            cout << "Enter the element that you want to push\n";
            cin >> iValue;
            obj.Push(iValue);
            break;
        case 2:
            iRet = obj.Pop();
            if (iRet != -1)
            {
                cout << "Popped element form stack is: " << iRet << "\n";
            }
            break;
        case 3:
            obj.Display();
            break;
        case 4:
            iRet = obj.Count();
            cout << "The number of elements in the stack are: " << iRet;
            break;
        case 0:
            cout<<"Thank you for choosing the application.\n";
            break;
        default:
            cout<<"Enter the valid option\n";
        }   //End of Switch
    }//End of While

    return 0;
}//End of main