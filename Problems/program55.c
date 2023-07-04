#include <stdio.h>
#include <stdbool.h>
bool CheckDigit(int iNo)
{
    while ( iNo > 0 )
    {
        if((iNo % 10)== 8) {
            break;
        }
        iNo = iNo / 10;
    }
    if(iNo == 0){
        return false;
    }
    else{
        return true;
    }
    
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