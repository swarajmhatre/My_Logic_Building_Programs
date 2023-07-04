#include <stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    float fAvg = 0.0f;
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        iCnt++;
    }
    fAvg = ((float)iSum / (float)iCnt);
    return fAvg;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    fRet = DigitsAverage(iValue);
    printf("The Average of the digits is: %f", fRet);
    return 0;
}