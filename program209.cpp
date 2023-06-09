#include <iostream>
using namespace std;

class Number
{
public:
    int iNo1;
    int iNo2;

    Number(int x, int y)
    {
        iNo1 = x;
        iNo2 = y;
    }

    int maximun()
    {
        return (iNo1 > iNo2 ? iNo1 : iNo2);
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout << "Enter First Number";
    cin >> iValue1;

    cout << "\nEnter Second Number";
    cin >> iValue2;

    Number nObj1(iValue1, iValue2);

    iRet = nObj1.maximun();

    cout << "\nThe maximum of two values is: " << iRet;

    cout << "Enter First Number";
    cin >> iValue1;

    cout << "\nEnter Second Number";
    cin >> iValue2;

    Number nObj2(iValue1, iValue2);

    iRet = nObj2.maximun();

    cout << "\nThe maximum of two values is: " << iRet;
    return 0;
}