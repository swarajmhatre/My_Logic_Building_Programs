#include <stdio.h>
#include <stdbool.h>

bool CheckDigits(char cValue)
{
    if ((cValue >= '0') && (cValue <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter Character:  \n");
    scanf("%c", &ch);

    bRet = CheckDigits(ch);

    if (bRet == true)
    {
        printf("%c is a digit \n", ch);
    }
    else
    {
        printf("%c is not a digit \n", ch);
    }
    return 0;
}