
#include <stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
        iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[50];

    printf("enter your string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("no of capital characters are : %d\n",iRet);

    return 0;
}