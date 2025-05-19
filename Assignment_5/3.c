#include<stdio.h>
void Display(int iNo)
{
    int icnt = 0;
    for (icnt = -iNo; icnt <= 0 ; icnt ++)
    {
        printf("%d ",icnt);
    }
    
    for (icnt = 1; icnt <= iNo ;icnt ++)
    {
        printf("%d ",icnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}