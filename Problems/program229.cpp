#include <iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
    int iDigit = 0;
    char Arr[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    cout << "The Hexadecimal conversion of " << iNo << " is: ";
    while (iNo != 0)
    {
        iDigit = iNo % 16;
        if (iDigit <= 9)
        {
            cout << iDigit;
        }
        else
        {
            cout<< Arr[iDigit -10];
        }
        iNo = iNo / 16;
    }
    cout << endl;
}
int main()
{
    int iValue = 0;
    cout << "Enter the number: \n";
    cin >> iValue;

    DisplayHexadecimal(iValue);
    return 0;
}