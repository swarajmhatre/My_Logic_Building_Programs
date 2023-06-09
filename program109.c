  // input 7
// Output: -5 -4 -3 -2 -1
#include <stdio.h>

void Display(int iNo){
    //Logic
    int iCnt =0;
    // 1           2              3
    for(iCnt =-iNo; iCnt<=-1; iCnt++){
        printf("%d\t", iCnt); //4
    }
    printf("\n");
}

int main(){
    int iFrequency =0;

    printf("Enter the Frequency of Symbol: \n");
    scanf("%d", &iFrequency);
    Display(iFrequency);
    return 0;
}