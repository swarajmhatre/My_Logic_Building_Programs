#include <stdio.h>

void DisplayDigits(int iNo){
    int iResult =0;
    while (iNo>0){
        iResult = iNo %10;
        printf("%d\n",  iResult);
        iNo = iNo/10;
    }
}

int main(){
    int iValue =0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    DisplayDigits(iValue);
    
    return 0;
}