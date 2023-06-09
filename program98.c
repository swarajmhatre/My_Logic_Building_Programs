// input 7
// Output #    #   #   #   #   #    #a
#include <stdio.h>

void Display(int iNo){
    //Logic
    int iCnt =0;
    for(iCnt =0; iCnt<iNo; iCnt++){
        printf("%d\t", iCnt);
    }
}

int main(){
    int iFrequency =0;

    printf("Enter the Frequency of Symbol: \n");
    scanf("%d", &iFrequency);
    Display(iFrequency);
    return 0;
}