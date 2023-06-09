#include <stdio.h>
#include <stdbool.h>
bool CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int itemp = iNo;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo = iNo / 10;
    }
    if (itemp == iReverse)
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
    int iValue = 0;
    bool bRet = 0;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckPallindrome(iValue);
    if (bRet)
    {
        printf("The number %d is a pallindrome.", iValue);
    }
    else
    {
        printf("The number %d is not a pallindrome.", iValue);
    }
    return 0;
}