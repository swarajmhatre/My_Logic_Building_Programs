#include <iostream>
using namespace std;

class Digit
{
public:
    int iNo;

    Digit(int x)
    {
        iNo = x;
    }

    int SumDigits()
    {
        int iDigit = 0;
        int iSum = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter number: \n";
    cin >> iValue;

    Digit dobj(iValue);
    iRet = dobj.SumDigits();

    cout << "Summation of DIgits: " << iRet << "\n";
    iRet = dobj.SumDigits();

    cout << "Summation of DIgits: " << iRet << "\n";

    return 0;
}