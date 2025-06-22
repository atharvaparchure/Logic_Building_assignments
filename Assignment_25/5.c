#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt] != '\0')
    {
       if((str[iCnt] == ' '))
       {
            iCount++;
       }
       iCnt++;
    }

    return iCount;
    
    
}

int main()
{
    int iRet = 0;
    char Arr[50];

    printf("enter your string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("White spaces is %d\n",iRet);

    return 0;
}