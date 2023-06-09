//display 1 to n numbers with custom input

#include <stdio.h>

void Display(int iNo){
int iCnt =0;
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