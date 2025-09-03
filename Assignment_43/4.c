#include<stdio.h>

int Max(int no)
{
    static int iMin = 9;

    if(no > 0)
    {
        int iDigit = no % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        Max(no / 10);

    }


    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("%d",iRet);

    return 0;
}