#include<stdio.h>

void Display(int no)
{
    static int iValue = 1;

    if(iValue < no)
    {
        printf("%d\t",iValue);
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