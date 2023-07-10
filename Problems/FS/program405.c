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
    char Arr[10];
    int iRet = 0;

    printf("Enter the file that you want to open: ");
    scanf("%s", Filename);

    fd = open(Filename, O_RDONLY);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 10); // 10
    write(1, Arr, iRet);

    iRet = read(fd, Arr, 5); // 5
    write(1, Arr, iRet);

    iRet = read(fd, Arr, iRet); // 0

    close(fd);

    return 0;
}