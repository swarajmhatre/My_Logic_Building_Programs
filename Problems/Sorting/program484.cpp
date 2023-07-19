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
    void BubbleSort();
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
void ArrayX<T>::BubbleSort()
{
    T temp;
    int i = 0, j = 0;
    for (i = 0; i < iSize; i++)
    {
        for (j = 0; j < iSize - 1; j++)
        {
            if (Arr[j] < Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
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

    obj->BubbleSort();

    cout << "\nData after sorting is: ";
    obj->Display();
    delete obj;
    return 0;
}
