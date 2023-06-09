#include <iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    UINT iResult = 0;

    if ((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        cout << "\nInvalid input.";
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);


    iResult = iNo & (iMask1 | iMask2);

    if (iResult == (iMask1 | iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue = 0;
    UINT iBit1 = 0;
    UINT iBit2 = 0;
    bool bRet = false;
    cout << "Enter the number: \n";
    cin >> iValue;

    cout << "Enter the 1st bit position: (Range should be 1 to 32)\n";
    cin >> iBit1;
    cout << "Enter the 2nd bit position: (Range should be 1 to 32)\n";
    cin >> iBit2;

    bRet = CheckBit(iValue, iBit1, iBit2);

    if (bRet)
    {
        cout << "Bit is ON.\n";
    }
    else
        cout << "Bit is OFF.\n";
    return 0;
}