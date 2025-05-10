#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

char ChkVowel(char cValue)
{
    if(cValue == 'a','e','i','o','u');
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character: ");
    scanf("%c",cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a vowel");
    }
    else
    (
        printf("It is not a vowel");
    )
    return 0;
}
