#include<stdio.h>

void StrCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') &&(iCnt != 0))
    {
        if((*src >='A') && (*src <='Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrCpyX(arr,brr,10);
    printf("%s",brr);



    return 0;
}