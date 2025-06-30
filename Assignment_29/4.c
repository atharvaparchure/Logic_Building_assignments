#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int CountCapital(char Ffname[] , char cfind)
{
    int fd = 0 , iRead = 0, iCnt = 0, iSpace = 0;
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
            if(Buffer[iCnt] == cfind)
            {
                iSpace++;
            }
        }
    }
    return iSpace;
    close(fd);

}
int main()
{
    int iRet = 0;
    char fname[1024] = {'\0'};
    char ch = '\0';

    printf("Enter file name that you want to open:\n");
    scanf("%s",fname);

    printf("Enter a character that you want to search:\n");
    scanf(" %c",&ch);

    iRet = CountCapital(fname, ch);

    printf("Frequency is  %d",iRet);

    return 0;
}