#include <stdio.h>

void Display(int iNo){
    for(int i=0; i<iNo; i++){
        printf("*\t");
    }
}

int main(){
    int iValue =0;

    printf("Enter the number of elements: \n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}