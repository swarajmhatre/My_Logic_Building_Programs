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
}

ArrayX::~ArrayX()
{
    delete[] Arr;
}

void ArrayX::Accept()
{
    int iCnt = 0;
    cout << "Enter the elements: \n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

void ArrayX::Display()
{
    int iCnt = 0;
    cout << "Elements of array are: \n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << "\n";
}
int main()
{
    int iValue =0;
    cout<<"Enter the size of the array: \n";
    cin>> iValue;

    ArrayX obj(5);
    obj.Accept();
    obj.Display();
    return 0;
}
