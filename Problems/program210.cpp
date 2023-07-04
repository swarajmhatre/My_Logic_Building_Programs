#include <iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            cout << "*\t";
        }
        cout << "\n";
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout << "Enter Row count";
    cin >> iValue1;

    cout << "\nEnter Column Count";
    cin >> iValue2;

    Display(iValue1, iValue2);

    cout << "\nThe maximum of two values is: " << iRet;
    return 0;
}