#include <iostream>
using namespace std;

template <class T>
class ArrayX
{
public:
    T *Arr;
    int iSize;
    ArrayX(int);
    ~ArrayX();
    void Accept();
    void Display();
    bool LinearSearch(T);
};

template <class T>
ArrayX<T>::ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T(iSize);
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete[] Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int iCnt = 0;
    cout << "Enter the elements: \n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int iCnt = 0;
    cout << "Elements of array are: \n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << "\n";
}

template <class T>
bool ArrayX<T>::LinearSearch(T No)
{
    bool flag = false;

    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    cout << "Enter the size of the array: \n";
    cin >> iValue;

    // ArrrayX <int> obj(iValue);

    ArrayX<int> *obj = new ArrayX<int>(iValue);

    obj->Accept();
    obj->Display();

    cout << "Enter the element that you want to search: \n";
    cin >> iValue;

    bRet = obj->LinearSearch(iValue);
    if (bRet == true)
    {
        cout << iValue << " is present in the array\n";
    }
    else
    {
        cout << iValue << " is not present in the array\n";
    }

    delete obj;
    return 0;
}
