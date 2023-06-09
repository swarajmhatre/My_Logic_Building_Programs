#include <stdio.h>
#include <stdlib.h>

void Fun(int Arr[], int iLength)
{
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter Number of Elements: ");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("\nEnter the elements: śś");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("\nEntered elements are: ");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n%d", ptr[iCnt]);
    }

    Fun(ptr, iSize);
    free(ptr);
    return 0;
}