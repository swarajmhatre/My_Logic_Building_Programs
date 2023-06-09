#include <stdio.h>
int strlenSmallX(char *str)
{
    int iCount =0;

    while(*str != '\0'){
        if((*str >='a') && (*str<='z')){
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);
    iRet = strlenSmallX(Arr);
    printf("\nThe number of small characters in the word are: %d", iRet);
    return 0;
}