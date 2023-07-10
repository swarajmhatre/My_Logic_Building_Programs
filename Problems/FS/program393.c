#include <stdio.h> //for std i/p
#include <fcntl.h> // file control: has file manipulation function
#include <unistd.h> //kahi defined function apan vaparto
#include <stdlib.h> //for malloc and free

/*
Create new file

int creat(char /FIle_name, int Permission);

File_name: Name of the file that you want to create
Permission: Permission fro new file(0777)

Return value: on success
On failure it returns -1

*/

int main()
{

    int fd = 0;
    char Fname [30];
    printf("Enter the name of the file that you want to create: ");
    scanf("%s", Fname);
    fd = creat(Fname, 0777);
    if (fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;
    }
    else
    {
        printf("File is Successfully Created\n");
    }
    return 0;
}