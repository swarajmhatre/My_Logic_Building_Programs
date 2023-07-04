#include <stdio.h>
#include <stdbool.h>
int CountDigit(int iNo, int iSearch)
{
    int iDigit =0;
    int iCnt = 0;
    if ((iSearch<0) || (iSearch >9)) // or((iSearch<0) || (iSearch >9))
    {
        printf("Please Enter valid digit to be searched.");
        return 0;
    }
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == iSearch)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue1);

    printf("Enter Digit(0 to 9): ");
    scanf("%d", &iValue2);

    iRet = CountDigit(iValue1, iValue2);

    printf("\nDigit %d is present %d times in the number %d.", iValue2, iRet, iValue1);

    return 0;
}