#include<stdio.h>

int Sum(int no)
{
   static int iSum = 1;
    
    if(no > 0)
    {
        static int idigit = 0;
    
        idigit = no % 10;
        iSum = iSum * idigit;
        no = no / 10;
        
        
        Sum(no);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);
    iRet = Sum(iValue);

    printf("%d",iRet);

    return 0;
}