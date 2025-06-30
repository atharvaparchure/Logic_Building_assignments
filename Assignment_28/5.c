#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd = 0, iRet = 0;
    char fname[30] = {'\0'};
    char Buffer[30] = {'\0'};

    printf("Enter the file that you want to ope:\n");
    scanf("%s",fname);
    printf("Enter the string that you want to write:\n");
    scanf("%s",Buffer);

    fd = open(fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    iRet = write(fd, Buffer, strlen(Buffer));
    printf("the file now contains data: %s of size %d bytes",Buffer,iRet);
    return 0;
}