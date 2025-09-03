#include<stdio.h>

void Display(int no)
{
    static int iValue = 0;

    if(iValue < no)
    {
        printf("*\t");
        iValue++;
        Display(no);
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