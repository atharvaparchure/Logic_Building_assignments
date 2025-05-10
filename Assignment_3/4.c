#include <stdio.h>

char DisplayConvert(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z') 
    {
        return cValue + ('a' - 'A');
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        return cValue - ('a' - 'A');
    }
}

int main()
{
    char cValue = '\0';
    char iRet = '\0';
    printf("Enter a character: ");
    scanf("%c",&cValue);

    iRet = DisplayConvert(cValue);
    printf("%c",iRet);
    return 0;
}