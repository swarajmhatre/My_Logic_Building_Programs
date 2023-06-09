#include <stdio.h>
#include <string.h>



int main(){
    char Arr[10];
    int iRet =0;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);
    iRet  = strlen(Arr);
    printf("\n%d", iRet);
    return 0;
}
//m,ṁ.1