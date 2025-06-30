#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd = 0;
    char fname[20];
    printf("Enter the file you want to open: \n");
    scanf("%s",fname);

    
    fd = creat(fname,0777);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File opened successfully\n");
    }

    return 0;
}