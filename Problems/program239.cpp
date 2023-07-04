#include <iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00102040;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;
    cout << "Enter the number: \n";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if (bRet)
    {
        cout << "7,14, ans 21 Bits are ON.\n";
    }
    else
        cout << "7,14, ans 21 Bits are OFF.\n";
        return 0;
}