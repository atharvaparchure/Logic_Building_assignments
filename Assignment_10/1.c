#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit  = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
            
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number");
    scanf("%d",&iValue);
    iRet = CountEven(iValue);
    printf("Even numbers are: %d",iRet);
    return 0;
    
}