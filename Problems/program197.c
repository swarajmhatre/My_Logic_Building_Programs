#include <stdio.h>
#include <stdbool.h>

bool strcmpX(char *str1, char *str2)
{
    for (; ((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2))); 
    {
        str1++; str2++;
    }
    return ((*str1 == '\0') && (*str2 == '\0'));
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first string:\n");
    scanf("%s[~\n]", Arr);

    printf("Enter Second string:\n");
    scanf("%s[~\n]", Brr);

    bRet = strcmpX(Arr, Brr);

    if (bRet == true)
    {
        printf("Both the strings are identical.");
    }
    else
    {
        printf("Both the strings are different.");
    }
    return 0;
}

// If the length of first string is n and for second string is m then the time complexity x is