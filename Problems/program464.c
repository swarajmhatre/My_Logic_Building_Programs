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
    if(iNo != 0){
        printf("%d\t", iNo%10);
        iNo = iNo/10;
        DisplayR(iNo);
    }
}


int main()
      {
    int iValue =0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    DisplayI(iValue);

    printf("\nEnd of main");

    return 0;
}