#include <stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    while (icnt < iNo)
    {
        printf("* \t");
        icnt++;
    } 
}

int main()
{
    int iValue = 0;
    printf("Enter a number to printn stars: ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}