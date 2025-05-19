#include<stdio.h>

void FactRev(int iNo)
{
    int icnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (icnt = iNo; icnt >= 1; icnt--)
    {
        if((iNo % icnt) != 0)
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

    FactRev(iValue);
    return 0;
}