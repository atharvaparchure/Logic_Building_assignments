#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0  ,iFact1 = 1,iFact2 = 1, iDiff = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    iDiff = iFact1 - iFact2;
    return iDiff;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Factorial is %d",iRet);
    return 0;


}