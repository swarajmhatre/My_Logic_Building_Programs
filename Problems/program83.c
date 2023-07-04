#include <stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt =0;
    int iMax = Arr[0];

    for(iCnt =0; iCnt<iLength; iCnt++){
        if(iMax<Arr[iCnt]){
            iMax = Arr[iCnt];
        }
    }
    return iMax;

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

    iRet = Maximum(ptr, iSize);
    printf("\nThe maximum number in the array is: %d", iRet);
    free(ptr);
    return 0;
}