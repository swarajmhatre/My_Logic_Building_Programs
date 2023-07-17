#include <iostream>
using namespace std;

template <class T>
class ArrayX
{
public:
    T *Arr;
    int Size;

    ArrayX(T length);
    void Accept();
    void Display();
    T Maximum();
};

template <class T>
ArrayX<T>::ArrayX(T length)
{
    Size = length;
    Arr = new T[Size];
}
template <class T>
void ArrayX<T>::Accept()
{
    cout << "ENter the elements: \n";
    int iCnt = 0;
    for (iCnt = 0; iCnt < Size; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}
template <class T>
void ArrayX<T>::Display()
{
    cout << "The elements of the array are: \n";
    int iCnt = 0;
    for (iCnt = 0; iCnt < Size; iCnt++)
    {
        cout << Arr[iCnt] << "\n";
    }
}

template <class T>
T ArrayX<T>::Maximum()
{
    T Max = Arr[0];
    for (int i = 0; i < Size; i++)
    {
        if (Max < Arr[i])
        {
            Max = Arr[i];
        }
    }
    return Max;
}
int main()
{
    ArrayX<int> obj(5);

    obj.Accept();
    obj.Display();
    int Ret = obj.Maximum();
    cout << "The maximum of integers is: " << Ret << "\n";

    ArrayX<double> obj2(5);

    obj2.Accept();
    obj2.Display();
    double Result  = obj2.Maximum();
    cout << "The maximum of doubles is: " << Result << "\n";
    return 0;
}