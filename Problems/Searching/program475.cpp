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
    cout<<"Inside constructor to allocate memory.";
}

ArrayX::~ArrayX()
{
    cout<<"INside destructor to deallocate memory.";

    delete[] Arr;
}

void ArrayX::Accept()
{
    int iCnt = 0;
    cout<<"\nInside Accept";
    cout << "Enter the elements: \n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

void ArrayX::Display()
{
    int iCnt = 0;
    cout<<"\nInside Display";

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
    cout<< "INside main"<<endl;
    cout<<"Enter the size of the array: \n";
    cin>> iValue;

    ArrayX obj(5);
    obj.Accept();
    obj.Display();
    cout<<"\nENd of main";
    return 0;
}
