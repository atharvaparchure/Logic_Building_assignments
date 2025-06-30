#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = 0;
    char fname[20];
    printf("Enter the file you want to open: \n");
    scanf("%s",fname);

    
    fd = open(fname,O_RDONLY);
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