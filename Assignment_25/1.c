#include <stdio.h>

void CountCapital(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
       if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
       {
            str[iCnt] = str[iCnt] + 32;
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
    printf("modified string is: %s\n",Arr);

    return 0;
}