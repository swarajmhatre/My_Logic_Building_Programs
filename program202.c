#include <stdio.h>
#include <stdbool.h>

bool CheckPalindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    start = str;
    end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;
    while (start < end)
    {
        if (*start != *end)
        {
            break;
        }
        start++;
        end--;
    }
    if (start< end)
    {
        return false;
    }
    else{
        return true;
    }
    
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String:  \n");
    scanf("%[^'\n]s", Arr);

    bRet = CheckPalindrome(Arr);
    if (bRet == true)
    {
        printf("THe given string is a palindrome.");
    }
    else
    {
        printf("The given string is not a palindrome.");
    }

    return 0;
}