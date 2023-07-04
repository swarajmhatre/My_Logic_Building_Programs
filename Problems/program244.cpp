#include <iostream>
using namespace std;

typedef unsigned int UINT;
int OFFBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult =0;

    iResult = iNo & iMask;

    if(iResult == iMask){
        return (iNo^iMask);
    }
    else{
        return iNo;
    }
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    cout << "Enter the number: \n";
    cin >> iValue;

    iRet = OFFBit(iValue);

    cout << "Modified Number is: " << iRet;
    return 0;
}