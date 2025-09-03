#include<stdio.h>

int fact(int no)
{
   static int iFact = 1;

   if(no > 0)
   {
        iFact = iFact * no;
        no--;
        fact(no);
   }
   return iFact;
    
    
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);
    iRet = fact(iValue);

    printf("%d",iRet);

    return 0;
}