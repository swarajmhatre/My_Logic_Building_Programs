#include <stdio.h>
#include <stdbool.h>
int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = CountEvenDigits(iValue);
    printf("\nNumber of Even digits in the number %d are: %d", iValue, iRet);

    return 0;
}