#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


int CheckChar(char Cchar)
{
    if((Cchar >= 97) && (Cchar <= 122)) 
    {
        Cchar = Cchar - 32;
        printf("%c", Cchar);
    }
    else if((Cchar >= 65) && (Cchar <= 90)) 
    {
        Cchar = Cchar + 32;
        printf("%c", Cchar);
    }
    else
    {
        printf("%c", Cchar);
    }
     

}

int main()
{
    char ch = '\0';
    bool bRet = FALSE;
    printf("Enter a character :\n");
    scanf("%c", &ch);

    bRet = CheckChar(ch);
    
    
    return 0;
}
