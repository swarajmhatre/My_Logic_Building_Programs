#include <stdio.h>

void StrnCpyX(char *src, char *dest, int iLength)
{
    while ((*src != '\0')&& (iLength!= 0))
    {
        *dest = *src;
        src++;
        dest++;
        iLength--;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("Enter String:  \n");
    scanf("%[^'\n]s", Arr);
printf("\nEnter the no. of characters that you want to cpy: ");
scanf("%d", &iNo);

    StrnCpyX(Arr, Brr, iNo);

    printf("String after copy is: %s\n", Brr);

    return 0;
}