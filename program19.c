//display 1 to n numbers with filter

#include <stdio.h>

void Display(int iNo){
int iCnt =0;
//filter for negative input
if(iNo<0){
  printf("Please enter a positive number.");
  return;
}
  for(iCnt=1; iCnt <= iNo; iCnt++ ){
    printf("%d\n", iCnt);
  }
}

int main(){
  int iValue;
  printf("Please enter the limit number: ");
  scanf("%d", &iValue);
  Display(iValue);

  return 0;
}