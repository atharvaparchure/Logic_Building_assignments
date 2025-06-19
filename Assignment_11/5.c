#include <stdio.h>

void PrintAlphabets(int iNo)
{
    
    int iCnt = 0 ,ieven = 2;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",ieven);
        ieven+=2;
        
    }
}

int main()
{
    int iValue;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    PrintAlphabets(iValue);

    return 0;
}
