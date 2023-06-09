#include <iostream>
using namespace std;

typedef unsigned int UINT;
int ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000040;

    return iNo ^ iMask;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    cout << "Enter the number: \n";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "Modified Number is: " << iRet;
    return 0;
}