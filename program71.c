#include <stdio.h>
#include <stdlib.h>
int main(){
    int iSize =0;
    int *ptr = NULL;

    printf("enter the number of elements: ");
    scanf("%d", &iSize);

    ptr =(int *) malloc(iSize*sizeof(int));
    if(ptr = NULL){
        printf("\nUnable to allocate memory");
        return -1;
    }
    else{
        printf("Memory allocated successfully");
    }


    return 0;
}