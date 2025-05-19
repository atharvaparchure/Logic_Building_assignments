#include <stdio.h>

int CountBetween(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit  = iNo % 10;
        if((iDigit >= 3) && (iDigit <= 7))
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
    iRet = CountBetween(iValue);
    printf("Even numbers are: %d",iRet);
    return 0;
    
}