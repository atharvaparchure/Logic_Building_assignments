#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0  ,iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
    
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