#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


bool CheckChar(char Cchar)
{
    if((Cchar >= 48) && (Cchar <= 57)) 
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
        printf("It is a number");
    }
    else if(bRet == FALSE)
    {
        printf("It is not a number");
    }
    return 0;
}
