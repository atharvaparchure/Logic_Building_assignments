#include <stdio.h>
int DisplayFactor(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1;i <= iNo; i ++)
    {
        if( (iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = DisplayFactor(iValue);
    printf("%d",iRet);

    return 0;

}