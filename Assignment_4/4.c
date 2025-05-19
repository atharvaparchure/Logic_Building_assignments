#include<stdio.h>

int SumNonFact(int iNo)
{
    int icnt = 0;
    int isum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (icnt = 1; icnt < iNo ; icnt++)
    {
        if((iNo % icnt) != 0)
        {
            isum = isum + icnt;
        }
        
    }
    return isum;

}

int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter a number");
    scanf("%d",&iValue);

    iret = SumNonFact(iValue);
    printf("Summation is : %d",iret);
    return 0;
}