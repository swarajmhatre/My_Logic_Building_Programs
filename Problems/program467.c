#include <stdio.h>

void DisplayI(int iNo)
{
    while(iNo != 0){
        printf("%d\t", iNo%10);
        iNo = iNo/10;
    }
}

void DisplayR(int iNo)
{
    int iDigit =0;
    if(iNo != 0){
        iDigit = iNo%10;
        iNo = iNo/10;
        DisplayR(iNo); //Head Recursion
        printf("%d\t", iDigit);
    }
}


int main()
      {
    int iValue =0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    DisplayR(iValue);

    printf("\nEnd of main");

    return 0;
}