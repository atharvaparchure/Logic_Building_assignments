#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char fname[20];
    char Buffer[30] = {'\0'};
    printf("Enter the file you want to open: \n");
    scanf("%s",fname);

    
    fd = open(fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    iRet = read(fd,Buffer,sizeof(Buffer)-1);
    if(iRet > 0)
    {
    printf("%d size of data has been read from %s \n", iRet, fname);
    printf("Data from the file is %s \n",Buffer);
    }
    else
    {
        printf("Your file is empty");
    }
    close(fd);

    return 0;
}