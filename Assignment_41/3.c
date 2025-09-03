#include<stdio.h>

void Display(int no)
{
    if(no > 0)
    {
        printf("%d\t", no);
        Display(no - 1);   
         
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}
