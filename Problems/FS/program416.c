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
    int fdRead = 0;
    int fdWrite = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0;

    printf("Enter the file that you want to open: ");
    scanf("%s", Filename);

    fdRead = open(Filename, O_RDONLY);

    printf("Enter the filename that you want to create: ");
    scanf("%s", Filename);
    fdWrite = creat(Filename, 0777);

    while (1)
    {
        iRet = read(fdRead, Arr, sizeof(Arr)); // 10

        if (iRet == 0)
        {
            break;
        }
        write(fdWrite, Arr, iRet);
    }

    printf("File is copied Successfully.");
    close(fdRead);

    return 0;
}