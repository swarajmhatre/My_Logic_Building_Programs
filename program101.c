// input 7
// Output 7    *    6   *   5   *   4   *   3   *   2   *   1   *
#include <stdio.h>

void Display(int iNo){
    //Logic
    int iCnt =0;
    for(iCnt =iNo; iCnt>= 1; iCnt--){
        printf("%d\t*\t", iCnt);
    }
}

int main(){
    int iFrequency =0;

    printf("Enter the Frequency of Symbol: \n");
    scanf("%d", &iFrequency);
    Display(iFrequency);
    return 0;
}