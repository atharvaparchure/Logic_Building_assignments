#include<stdio.h>

int strlen(char *str)
{
   static int iCount = 0;
    
    if(str != '\0')
    {
        iCount++;
        
        strlen(str + 1);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[50];
    printf("Enter a string : ");
    scanf("%s",arr);
    iRet = strlen(arr);

    printf("%d",iRet);

    return 0;
}