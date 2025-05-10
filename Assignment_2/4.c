#include <stdio.h>

int Display(int iNo, int iFrequency)
{
    int icnt = 0;
    for (icnt = 1;icnt <= iFrequency; icnt++)
    {
        printf("%d",iNo);

    }

}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    printf("Enter frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}