#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


void Display(char Ffname[])
{
    int fd = 0 , iRet = 0, iCnt = 0;
    char Buffer[1024] = {'\0'};
    fd = open(Ffname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to read file");
    }
    while(iRet = read(fd,Buffer, sizeof(Buffer) - 1) > 0)
    {
        printf("%s",Buffer);
    }

    
    close(fd);

}
int main()
{
    
    char fname[1024] = {'\0'};

    printf("Enter file name that you want to open:\n");
    scanf("%s",fname);

    Display(fname);

    

    return 0;
}