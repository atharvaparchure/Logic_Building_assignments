#include<stdio.h>

int Factorial(int iNo)
{
    int icnt = 0;
    int iFact = 1;
    for (icnt = 1; icnt <= iNo ;icnt++)
    {
        iFact =iFact * icnt;
        
    }

return iFact;
}


int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter a number");
    scanf("%d",&iValue);
    iret =Factorial(iValue);
    
    printf("Factorial is: %d ",iret);
    return 0;

}