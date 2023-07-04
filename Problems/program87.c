#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bResult = false;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (iNo == Arr[iCnt])
        {
            bResult = true;
            break;
        }
    }
    return bResult;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = 0;
    int iSearch = 0;

    printf("Enter Number of Elements: \n");
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
    printf("\nEnter the element to be searched ");
    scanf("%d", &iSearch);
    bRet = Search(ptr, iSize, iSearch);
    if (bRet == true)
    {

        printf("\nThe number %d is present in the array.", iSearch);
    }
    else
    {
        printf("\nThe number %d is not present in the array.", iSearch);
    }
    free(ptr);
    return 0;
}