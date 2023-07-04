// input 7
// Output 1 b   c   d   e   f   g
#include <stdio.h>

void Display(int iNo){
    //Logic
    int iCnt =0;
    char ch ='A';
    for(iCnt =iNo; iCnt>= 1; iCnt--){
        printf("%c\t", ch);
        ch++;
    }
}

int main(){
    int iFrequency =0;

    printf("Enter the Frequency of Symbol: \n");
    scanf("%d", &iFrequency);
    Display(iFrequency);
    return 0;
}