// Count Digits

#include <stdio.h>
int countZ(char *str, char cValue)
{
    int iCount =0;

    while(*str != '\0'){
        if(*str == cValue){
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    char ch = '\0';
    int iRet = 0;
    
    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    printf("enter the character: \n");
    scanf(" %c", &ch);

    iRet = countZ(Arr, ch);

    printf("\nThe number of occurance of character %c in the word are: %d", ch, iRet);
    return 0;
}