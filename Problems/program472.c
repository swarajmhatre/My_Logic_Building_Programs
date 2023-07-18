#include <stdio.h>

int strlenI(char *str)
{
    int iResult = 0;
    while (*str != '\0')
    {
        iResult++;
        str++;
    }
    return iResult;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenI(Arr);

    printf("Length of the string is: %d\n", iRet);

    return 0;
}