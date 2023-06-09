#include <stdio.h>

int ReverseNumber(int iNo){
    int iDigit =0;
    int iReverse =0;
    while (iNo>0){
        iDigit = iNo %10;
        iReverse = iReverse *10 + iDigit;
        iNo = iNo/10;
    }
    return iReverse;
}

int main(){
    int iValue =0;
    int iRet=0;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = ReverseNumber(iValue);
    printf("The Reverse number is: %d", iRet);
    return 0;
}