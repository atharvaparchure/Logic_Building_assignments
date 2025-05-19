#include<stdio.h>

int MultFact(int iNo)
{
    int icnt = 0;
    int imul = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1 ;icnt <= (iNo / 2) ; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d\n",icnt);
           
        }   
         imul = imul * icnt;
    }
    return imul;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter a number");
    scanf("%d",&iValue);

    iret = MultFact(iValue);

    printf("%d",iret);
    return 0;
}