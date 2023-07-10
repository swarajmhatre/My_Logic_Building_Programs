#include <stdio.h>  //for std i/p
#include <fcntl.h>  // file control: has file manipulation function
#include <unistd.h> //kahi defined function apan vaparto
#include <stdlib.h> //for malloc and free
#include <string.h>

/*
Read the data from  the file
*/

int main()
{
    char Filename[50];
    int fd = 0;
    char Arr[100];
    int iRet = 0;

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
        write(1, Arr, iRet);
    }

    close(fd);

    return 0;
}