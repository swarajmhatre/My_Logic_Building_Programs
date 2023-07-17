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
int main()
{
    ArrayX<int> obj(5);

    obj.Accept();
    obj.Display();
   
    ArrayX<double> obj2(5);

    obj2.Accept();
    obj2.Display();

    return 0;
}