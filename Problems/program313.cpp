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
    PNODE temp = First;

    for (int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
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
    if ((iPos < 1) || (iPos > (iCount)))
    {
        cout << "\nInvalid Input";
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;

        for (int iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }
        tempX = temp->next;
        temp->next = temp->next->next;
        delete tempX;
        iCount--;
    }
}
int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int ivalue = 0;
    int iPosition = 0;

    cout << "\n__________Marvellous Linked List Apllication.___________";

    while (1)
    {
        cout << "------------------------------------------------------------------------------------------\n";
        cout << "PLease enter your choice: \n";

        cout << "1: Insert node at first position.\n";
        cout << "2: Insert node at Last position.\n";
        cout << "3: Insert node at the given position.\n";
        cout << "4: Delete node from first position.\n";
        cout << "5: Delete node from Last position.\n";
        cout << "6: Delete node from the given position.\n";
        cout << "7: Display the elements of Linked List.\n";
        cout << "8: Count the number of nodes.\n";
        cout << "9: Terminate the application.\n";

        cin >> iChoice;

        cout << "------------------------------------------------------------------------------------------\n";

        switch (iChoice)
        {
        case 1:
            cout << "\nEnter the value that you want to insert: ";
            cin >> ivalue;
            obj.InsertFirst(ivalue);
            break;
        case 2:
            cout << "\nEnter the value that you want to insert: ";
            cin >> ivalue;
            obj.InsertLast(ivalue);
            break;
        case 3:
            cout << "\nEnter the value that you want to insert: ";
            cin >> ivalue;
            cout << "\nEnter the value the position at which you want to insert: ";
            cin >> iPosition;
            obj.InsertAtPos(ivalue, iPosition);
            break;
        case 4:
            obj.DeleteFirst();
            break;
        case 5:
            obj.DeleteLast();
            break;
        case 6:
            cout << "\nEnter the value the position of the value you want to delete: ";
            cin >> iPosition;
            obj.DeleteAtPos(iPosition);
            break;
        case 7:
            obj.Display();
            break;
        case 8:
            cout << "\nThe number of nodes in the linked list are:" << obj.Count() << "\n";
            break;
        case 9:
            cout << "\nThank you for using the application! Exiting...";
            return 0;
        default:
            cout << "\nInvalid Input.";
            break;
        }
    }

    return 0;
}