#include<stdio.h>

void Multiple(int iNo)
{
    int icnt = 0;
    int imul = 0;
    for (icnt = 1 ;icnt <= iNo ;icnt++)
    {
        imul = iNo * icnt;
        printf("%d ",imul);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number");
    scanf("%d",&iValue);
    Multiple(iValue);
    return 0;
}