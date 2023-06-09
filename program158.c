#include <stdio.h>

int main(){
    char Arr[40];

    printf("Enter you name: \n");

    scanf("%[^'\n']s", Arr);

    printf("Your name is: %s\n", Arr);
    return 0;
}
//m,ṁ.1