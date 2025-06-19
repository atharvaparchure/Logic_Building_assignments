#include <stdio.h>

void PrintAlphabets(int iNo)
{
    
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
        printf("*\t");
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
