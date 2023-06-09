#include <stdio.h>
#include <stdlib.h>
#define ERR_NOTFOUND -1
int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if (iNo == Arr[iCnt])
        {
            break;
        }
    }
    return iCnt;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
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
    iRet = SearchLastOccurance(ptr, iSize, iSearch);
    if (iRet == ERR_NOTFOUND)
    {

        printf("\nThe number %d is not present in the array.", iSearch);
    }
    else
    {
        printf("\nThe number %d is present in the array at the index %d.", iSearch, iRet);
    }
    free(ptr);
    return 0;
}