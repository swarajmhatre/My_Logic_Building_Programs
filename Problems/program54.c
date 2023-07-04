#include <stdio.h>
#include <stdbool.h>
bool CheckDigit(int iNo)
{
    bool iResult = false;
    while ( iNo > 0 )
    {
        if((iNo % 10)== 8) {
            iResult = true;
            break;
        }
        iNo = iNo / 10;
    }
    return iResult;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckDigit(iValue);
    if(bRet == true){
        printf("\nDigit 8 is present");
    }
    else{
        printf("\nDigit 8 is not present");
    }
    return 0;
}