#include<stdio.h>

int strrevX(char *str, char Cfreq)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == Cfreq)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
   
}

int main()
{
    char Arr[50] = {'\0'};
    char ch ='\0';
    int bRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character to find: \n");
    scanf(" %c",&ch);

    bRet = strrevX(Arr,ch);
    printf("Frequency of %c is %d",ch,bRet);
       

    return 0;
}

// Time Complexity O(N+N/2)