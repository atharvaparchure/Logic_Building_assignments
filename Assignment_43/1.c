#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;


    if(*str != '\0')
    {

        if(*str == ' ')
        {
            iCount++;
        }
        
        WhiteSpace(str + 1);

    }
    return iCount;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter a string :");
    fgets(arr, sizeof(arr),stdin);

    iRet = WhiteSpace(arr);
    printf("NUmber of white spaces are: %d",iRet);

    return 0;
}