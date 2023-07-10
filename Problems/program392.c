#include <stdio.h> //for std i/p
#include <fcntl.h> // file control: has file manipulation function
#include <unistd.h> //kahi defined function apan vaparto
#include <stdlib.h> //for malloc and free

int main()
{

    int fd = 0;
    char Fname [30];
    printf("Enter the name of the file: ");
    scanf("%s", &Fname);
    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is Successfully opened with FD %d\n", fd);
    }
    close(fd);
    return 0;
}