#include <stdio.h>
#include <stdbool.h>

bool stricmpX(char *str1, char *str2)
{
    while ((*str1 != '\0') && (*str2 != '\0'))
    {
        if (*str1 != *str2)
        {

            if ((*str1 >= 'a') && (*str1 <= 'z'))
            {
                if (*str1 != (*str2 + 32))
                {
                    break;
                }
            }
            else if ((*str1 >= 'A') && (*str1 <= 'Z'))
            {
                if (*str1 != (*str2 - 32))
                {
                    break;
                }
            }
        }

        str1++;
        str2++;
    }
    if ((*str1 == '\0') && (*str2 == '\0'))
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
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter first string:\n");
    scanf("%s[~\n]", Arr);

    printf("Enter Second string:\n");
    scanf("%s[~\n]", Brr);

    bRet = stricmpX(Arr, Brr);

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