#include <iostream>
using namespace std;

template <class T>
void Swap(T *No1, T *No2)
{
    T Temp;
    Temp = *No1;
    *No1 = *No2;
    *No2 = Temp;
}

int main()
{
    int A = 10, B = 11, Ret = 0;
    Swap(&A, &B);

    cout << "Data After Swapping: \n";
    cout << "value of A: " << A << "\n";
    cout << "value of B: " << B << "\n";

    return 0;
}