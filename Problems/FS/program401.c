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
    printf("Enter the file that you want to delete: ");
    scanf("%s", Filename);

    remove(Filename);
    return 0;
}