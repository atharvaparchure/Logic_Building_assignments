#include<stdio.h>

int NonFact(int iNo)
{
    int icnt = 0;
    int isum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (icnt = 1; icnt <= iNo ; icnt++)
    {
        if((iNo % icnt) != 0)
        {
            printf("%d ",icnt);
            isum = isum + icnt;
        }
        
    }
    return isum;

}
int Fact(int iNo)
{
    int icnt = 0;
    int isum1 = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (icnt = 1; icnt <= iNo ; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d ",icnt);
            isum1 = isum1 = icnt;
        }
        
    }
    return isum1;
}

int main()
{
    int iValue = 0;
    int ifact = 0;
    int inonfact = 0;
    int iret = 0;
    printf("Enter a number");
    scanf("%d",&iValue);

    ifact = Fact(iValue);
    inonfact = NonFact(iValue);

    iret = ifact - inonfact;


    printf("Summation is : %d",iret);
    return 0;
}