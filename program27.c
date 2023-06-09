// Accept the number and check whether it is a perfect number or not

#include <stdio.h>
#include <stdbool.h>

int SumFactors(int iNo)
{
  int iCnt = 0;
  int iSum = 0;

  if(iNo <0){ //Updator
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
  {
    if ((iNo % iCnt) == 0)
    {
      iSum += iCnt;
    }
  }
    return iSum;
}


bool CheckPerfect(int iNumber){
  int iResult =0;

  iResult = SumFactors(iNumber);
  if(iResult == iNumber){
    return true;
  }
  else{
    return false;
  }
}
int main()
{

  int iValue = 0;
  bool iRet =false;

  printf("Enter Number:");
  scanf("%d", &iValue);

  iRet = CheckPerfect(iValue);

  if(iRet == true){
  printf("The number %d is a perfect number.", iValue);
  }
  else{
  printf("The number %d is not a perfect number.", iValue);
  }

  return 0;
}

// Time Complexity : O(N);
// Where N is the input(Natural Number)