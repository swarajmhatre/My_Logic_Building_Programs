#include <stdio.h>

int SumI(int iNo)
{
    int iDigit =0;
    int iSum =0;

    while (iNo!=0)
    {
        iDigit = iNo %10;
        iSum += iDigit;
        iNo = iNo/10;
    }
    return iSum;
}
int SumR(int iNo)
{
    int iDigit =0;
    static int iSum =0;

    if (iNo!=0)
    {
        iDigit = iNo %10;
        iSum += iDigit;
        iNo = iNo/10;
        SumR(iNo);
    }
    return iSum;
}


int main()
      {
    int iValue =0;
    int iRet =0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

   iRet = SumR(iValue);

    printf("Addition of Digits: %d\n", iRet);

    return 0;
}