#include <stdio.h>

void DisplayI(int iNo)
{
    int iCnt =1;
    while(iCnt <= iNo){
        printf("%d\t", iCnt);
        iCnt++;
    }
}
void DisplayR(int iNo)
{
    static int iCnt =1;
    if(iCnt <= iNo){
        printf("%d\t", iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}


int main()
      {
    int iValue =0;

    printf("Enter the numberṁ: \n");
    scanf("%d", &iValue);

    DisplayI(iValue);

    printf("\nEnd of main");

    return 0;
}