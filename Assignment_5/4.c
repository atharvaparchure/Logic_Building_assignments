#include <stdio.h>

void DisplayOdds(int iNo)
{
    int icnt = 0;
    for (icnt = 1; icnt <= iNo; icnt++)
    {
        if((icnt % 2) != 0)
        {
            printf("%d ",icnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number");
    scanf("%d",&iValue);

    DisplayOdds(iValue);
    return 0;
}