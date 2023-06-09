#include <iostream>
using namespace std;

class Number
{
public:
    int iNo1;
    int iNo2;
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

    Number nObj;

    cout << "Enter First Number";
    cin >> iValue1;
    nObj.iNo1 = iValue1;
    cout << "\nEnter Second Number";
    cin >> iValue2;
    nObj.iNo2 = iValue2;

    iRet = nObj.maximun();
    cout << "\nThe maximum of two values is: " << iRet;
    return 0;
}