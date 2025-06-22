#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


bool CheckSpecial (char Cchar)
{
    if((Cchar >= 33) && (Cchar <= 47)) 
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

    bRet = CheckSpecial(ch);
    if(bRet == TRUE)
    {
        printf("True");
    }
    else if(bRet == FALSE)
    {
        printf("False");
    }
    
    
    return 0;
}
