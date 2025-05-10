#include<stdio.h>
#define ERR_WRONG_INPUT 

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return ERR_WRONG_INPUT;
    }
    int icnt = 0;
    for (icnt =1 ;icnt <= iNo; icnt++)
    {
        printf("%d",icnt * 2);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;
    printf("Enter a number");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}

