#include <stdio.h>

void StrCpyToggleX(char *src, char *dest)
{
    int iGap = 'a' - 'A';
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + iGap;
            dest++;
        }
        else if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - iGap;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String:  \n");
    scanf("%[^'\n]s", Arr);

    StrCpyToggleX(Arr, Brr);

    printf("String after copy is: %s\n", Brr);

    return 0;
}