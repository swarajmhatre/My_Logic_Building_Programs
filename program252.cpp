#include <iostream>
using namespace std;

typedef unsigned int UINT;
int OFFBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if ((iPos < 1) || (iPos > 32))
    {
        cout << "\nInvalid input.";
        return false;
    }

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    UINT iBit = 0;
    cout << "Enter the number: \n";
    cin >> iValue;
    cout << "Enter the position: \n";
    cin >> iBit;

    iRet = OFFBit(iValue, iBit);

    cout << "Modified Number is: " << iRet;
    return 0;
}