#include <stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    while (iNo > 0)
    {
        printf("* \t");
        iNo--;
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