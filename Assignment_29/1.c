#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountCapital(char Ffname[])
{
    int fd = 0 , iRead = 0, iCnt = 0, iCap = 0;
    char Buffer[1024] = {'\0'};
    fd = open(Ffname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to read file");
    }
    while((iRead = read(fd, Buffer, sizeof(Buffer))) >0)
    {
        for(iCnt = 0; iCnt < iRead;iCnt ++)
        {
            if(Buffer[iCnt] >= 'A' && Buffer[iCnt] <= 'Z')
            {
                iCap++;
            }
        }
    }
    return iCap;
    close(fd);

}
int main()
{
    int iRet = 0;
    char fname[1024] = {'\0'};

    printf("Enter file name that you want to open:\n");
    scanf("%s",fname);

    iRet = CountCapital(fname);

    printf("Number of capital letters is: %d",iRet);

    return 0;
}