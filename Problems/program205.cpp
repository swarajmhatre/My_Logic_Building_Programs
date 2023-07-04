#include <iostream>
using namespace std;

class Number
{
public:
    int maximun(int iNo1, int iNo2)
    {
        return (iNo1 > iNo2 ? iNo1 : iNo2);
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    Number nObj;

    cout << "Enter First Number";
    cin >> iValue1;

    cout << "\nEnter Second Number";
    cin >> iValue2;

    iRet = nObj.maximun(iValue1, iValue2);
    cout << "\nThe maximum of two values is: " << iRet;
    return 0;
}