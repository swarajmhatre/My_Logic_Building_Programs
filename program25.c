// Accept the number and display the sum the factors of the number

#include <stdio.h>

int SumFactors(int iNo)
{
  int iCnt = 0;
  int iSum = 0;

  for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
  {
    if ((iNo % iCnt) == 0)
    {
      iSum += iCnt;
    }
  }
    return iSum;
}

int main()
{

  int iValue = 0;
  int iRet =0;

  printf("Enter Number:");
  scanf("%d", &iValue);

  iRet = SumFactors(iValue);

  printf("The sum of the factors is: %d", iRet);

  return 0;
}

// Time Complexity : O(N);
// Where N is the input(Natural Number)