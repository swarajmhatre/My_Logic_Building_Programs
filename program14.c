// Display "Jay Ganesh" n times on screen

#include <stdio.h>

// Example of iteration

// Display Function
void Display(int iNo)
{
  int iCnt = 0;

  //Filter
  if(iNo <0){
    iNo = -iNo;
  }
  //       1          2         3
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("Jay Ganesh...\n"); //4
  }
}

int main()
{
  int iValue = 0;
  printf("Enter the frequency for Jay Ganesh Statement: ");
  scanf("%d", &iValue);

  Display(iValue);
  return 0;
}