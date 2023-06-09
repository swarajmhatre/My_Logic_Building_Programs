#include <iostream>
using namespace std;
class Pattern
{
public:
    int iRow = 0;
    int iCol = 0;
    Pattern(int x, int y)
    {
        iRow = x;
        iCol = y;
    }
    void Display()
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
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout << "Enter Row count";
    cin >> iValue1;

    cout << "\nEnter Column Count";
    cin >> iValue2;
    Pattern pobj(iValue1, iValue2);
    newP.Display();

    cout << "\nThe maximum of two values is: " << iRet;
    return 0;
}