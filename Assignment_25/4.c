#include <stdio.h>

void CountCapital(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
       if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
       {
            printf("%c",str[iCnt]);
       }
       iCnt++;
    }
    
    
    
}

int main()
{
    int iRet = 0;
    char Arr[50];

    printf("enter your string\n");
    scanf("%[^'\n']s",Arr);

    CountCapital(Arr);
    

    return 0;
}