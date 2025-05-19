#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSum1 = 0,iSum2 = 0,iDiff = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if ((iDigit % 2) == 0)
        {
            iSum1 += iDigit;   
        } 
        else if ((iDigit % 2) != 0)
        {
            iSum2 += iDigit;
        }
    }
    iDiff = iSum1 - iSum2;
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("enter a number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference between the summation of even difits and summation of odd digit is %d ",iRet);
    return 0;
}