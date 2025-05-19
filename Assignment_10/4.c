#include <stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    while(iNo != 0)
    {
        iDigit  = iNo % 10;
    
        iNo = iNo / 10;

        iMul = iMul * iDigit;
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number");
    scanf("%d",&iValue);
    iRet = MultDigit(iValue);
    printf("Multiplicaiton of digits is: %d",iRet);
    return 0;
    
}