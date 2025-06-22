#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;
bool strrevX(char *str, char Cfreq)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == Cfreq)
        {
        return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[50] = {'\0'};
    char ch ='\0';
    bool bRet = FALSE;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character to find: \n");
    scanf(" %c",&ch);

    bRet = strrevX(Arr,ch);
    if(bRet == 1)
    {
        printf("%c is present ", ch);
    }
    else
    {
        printf("%c is not present ", ch);
    }

    

    return 0;
}

// Time Complexity O(N+N/2)