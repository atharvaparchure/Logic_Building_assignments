#include<stdio.h>

int CountSmall(char *str)
{
    static int iCount = 0;


    if(*str != '\0')
    {

        if((*str >= 97) && (*str <= 122))
        {
            iCount++;
        }
        
        CountSmall(str + 1);

    }
    return iCount;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter a string :");
    fgets(arr, sizeof(arr),stdin);

    iRet = CountSmall(arr);
    printf("NUmber of small characters are: %d",iRet);

    return 0;
}