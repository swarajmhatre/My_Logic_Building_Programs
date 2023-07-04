// Count vowels
// a e i o u   A E I O U
#include <stdio.h>
int countVowelsX(char *str)
{
    int iCount =0;

    while(*str != '\0'){
        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u')
        ||(*str == 'A')||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U') ){
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);
    iRet = countVowelsX(Arr);
    printf("\nThe number of small characters in the word are: %d", iRet);
    return 0;
}