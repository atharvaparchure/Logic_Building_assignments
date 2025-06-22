#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


bool CheckChar(char Cchar)
{
    if((Cchar >= 97) && (Cchar <= 122)) 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
     

   
}

int main()
{
    char ch = '\0';
    bool bRet = FALSE;
    printf("Enter a character :\n");
    scanf("%c", &ch);

    bRet = CheckChar(ch);
    if(bRet == TRUE)
    {
        printf("It is a small character");
    }
    else if(bRet == FALSE)
    {
        printf("It is not a small character");
    }
    return 0;
}
