#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


bool CheckChar(char Cchar)
{
    if(((Cchar >= 65) && (Cchar <= 90)) || ((Cchar >= 97) && (Cchar <= 122)))
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
        printf("It is a alphabet");
    }
    else if(bRet == FALSE)
    {
        printf("It is not an alphabet");
    }
    return 0;
}
