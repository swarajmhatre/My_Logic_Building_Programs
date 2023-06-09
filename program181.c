#include <stdio.h>

void StrToggle(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String:  \n");
    scanf("%[^'\n]s", Arr);

    StrToggle(Arr);

    printf("String after editing is: %s\n", Arr);

    return 0;
}