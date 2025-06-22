#include <stdio.h>

int CountCapital(char *str)
{
    int iSmall = 0 ,iCap = 0 , iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCap++;
        }
        str++;
    }
    iDiff = iSmall - iCap;
    
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