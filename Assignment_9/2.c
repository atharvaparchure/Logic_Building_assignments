#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0, ihasZero = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            ihasZero = 1;
            break;
        }
        
        iNo = iNo / 10;

       
    }
    if(ihasZero)
       {
        printf("There is zero in the number");
       }
       else
       {
        printf("There is no zero in the number");
       }
       
    
}

int main()
{
    int iValue = 0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}