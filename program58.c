#include <stdio.h>
#include <stdbool.h>
bool CheckDigit(int iNo, int iSearch)
{
    bool bFlag = false;
    if ((iSearch<0) || (iSearch >9)) // or((iSearch<0) || (iSearch >9))
    {
        printf("Please Enter valid digit to be searched.");
        return false;
    }
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    while (iNo != 0)
    {
        if ((iNo % 10) == iSearch)
        {
            bFlag = true;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue1);
    
    printf("Enter Digit(0 to 9): ");
    scanf("%d", &iValue2);

    bRet = CheckDigit(iValue1, iValue2);
    if (bRet == true)
    {

        printf("\nDigit %d is present in the number %d.", iValue2, iValue1);
    }
    else
    {
        printf("\nDigit %d is not present in the number %d.", iValue2, iValue1);
    }

    return 0;
}