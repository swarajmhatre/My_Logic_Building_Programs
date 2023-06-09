#include <stdio.h>
#include <stdlib.h>

void MaximumMinimum(int Arr[], int iLength)
{
    int iCnt =0;
    int iMin = Arr[0];
    int iMax = Arr[0];


    for(iCnt =0; iCnt<iLength; iCnt++){
        if(iMin> Arr[iCnt]){
            iMin = Arr[iCnt];
        }
        if(iMax<Arr[iCnt]){
            iMax = Arr[iCnt];
        }
    }
    printf("\nThe maximum and minimum elements in the array are: %d and %d respectively.", iMax, iMin);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet =0;

    printf("Enter Number of Elements: ");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("\nEnter the elements: ");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("\nEntered elements are: ");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n%d", ptr[iCnt]);
    }

    MaximumMinimum(ptr, iSize);
    free(ptr);
    return 0;
}
