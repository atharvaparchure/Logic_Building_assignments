#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;
bool CountCapital(char *str)
{
    int iCount = 0 ;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e')|| (*str == 'i') || (*str == 'o')|| (*str == 'u') )
        {
            return TRUE;
        }
     
        str++;
        
    }
    return FALSE;
    
    
}

int main()
{
     bool bRet = 0;
    char Arr[50];

    printf("enter your string\n");
    scanf("%[^'\n']s",Arr);

    bRet = CountCapital(Arr);

    if(bRet == 1)
    {
        printf("true");
    }

    else if(bRet == 0)
    {
        printf("false");
    }
    

    return 0;
}