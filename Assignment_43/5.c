#include<stdio.h>

int Max(int no)
{
    static int iRev = 0;

    if(no > 0)
    {
        int iDigit = no % 10;
        iRev = iRev * 10 + iDigit;
        Max(no / 10);

    }


    return iRev;
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