#include <stdio.h>
int strlenX(char *str)
{
    int iCount =0;

    while(*str != '\0'){
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string \n");
    printf("%d",iRet);
    scanf("%[^'\n']s", Arr);
    iRet = strlenX(Arr);
    printf("\n%d", iRet);
    return 0;
}