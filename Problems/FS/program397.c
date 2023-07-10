#include <stdio.h> //for std i/p
#include <fcntl.h> // file control: has file manipulation function
#include <unistd.h> //kahi defined function apan vaparto
#include <stdlib.h> //for malloc and free
#include<string.h>

/*
Read the data from  the file
*/


int main()
{

    int fd = 0;
    char Fname [30];
    int iRet = 0;
    char Arr[50] = {'\0'};
    printf("Enter the name of the file that you want to open: ");
    scanf("%s", Fname);


    fd = open(Fname, O_RDWR );

    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    iRet = read(fd, Arr, 5);

    printf("%d bytes get successfully fetched from file", iRet);
    
    printf("Data from the file is: %s\n", Arr);

    close(fd);
    return 0;
}