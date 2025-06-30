#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char Buffer[30] ={'\0'};
    char fname[20];
    printf("Enter the file you want to open: \n");
    scanf("%s",fname);

    
    fd = open(fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    iRet = read(fd,Buffer, sizeof(Buffer) - 1);
    if(iRet > 0)
    {
        printf("data in the file is of size %d bytes\n",iRet);
    }
    else
    {
        printf("Size of the file is 0 bytes");
    }

    

    return 0;
}