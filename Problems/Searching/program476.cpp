#include <iostream>
using namespace std;

class ArrayX
{
public:
    int *Arr;
    int iSize;
    ArrayX(int);
    ~ArrayX();
    void Accept();
    void Display();
};

ArrayX::ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new int(iSize);
    cout << "\nInside constructor to allocate memory.";
}

ArrayX::~ArrayX()
{
    cout << "\nInside destructor to deallocate memory.";

    delete[] Arr;
}

void ArrayX::Accept()
{
    int iCnt = 0;
    cout << "\nInside Accept\n";
    cout << "Enter the elements: \n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

void ArrayX::Display()
{
    int iCnt = 0;
    cout << "\nInside Display\n";

    cout << "Elements of array are: \n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << "\n";
}
int main()
{
    int iValue = 0;
    cout << "\nInside main" << endl;
    cout << "Enter the size of the array: \n";
    cin >> iValue;

    ArrayX *obj = new ArrayX(iValue);

    obj->Accept();
    obj->Display();

    delete obj;

    cout << "\nEnd of main";
    return 0;
}
