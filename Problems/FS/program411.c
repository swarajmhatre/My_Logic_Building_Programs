#include <stdio.h>  //for std i/p
#include <fcntl.h>  // file control: has file manipulation function
#include <unistd.h> //kahi defined function apan vaparto
#include <stdlib.h> //for malloc and free
#include <string.h>

/*
Read the data from  the file
*/

#define BUFFERSIZE 1024

int main()
{
    char Filename[50];
    int fd = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0, iCnt = 0, iCount = 0;

    printf("Enter the file that you want to open: ");
    scanf("%s", Filename);

    fd = open(Filename, O_RDONLY);

    while (1)
    {
        iRet = read(fd, Arr, sizeof(Arr)); // 10

        if (iRet == 0)
        {
            break;
        }
        for (iCnt = 0; iCnt < iRet; iCnt++)
        {
            if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCount++;
            }
        }
    }

    printf("Number of Capitalcase letters are: %d\n" , iCount);

    close(fd);

    return 0;
}