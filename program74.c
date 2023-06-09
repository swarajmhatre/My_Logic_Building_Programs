#include <stdio.h>  //For input Output
#include <stdlib.h> //For memory management

int main()
{ // Entry Point Function

    int iSize = 0;   // To store size of Array
    int *ptr = NULL; // To store address of Array
    int iCnt = 0;    // Loop Counter

    // Step1: Accept the number of elements from user
    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    // Step2: Allocate memory Dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    // Step3: Accept the Values from user
    printf("Enter the elements:  \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("\nThe elements of Array are: \n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }
    return 0; // Return Success to host
}