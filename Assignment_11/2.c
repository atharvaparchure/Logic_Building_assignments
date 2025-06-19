#include <stdio.h>

void PrintAlphabets(int iNo)
{
    
    int iCnt;

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d \t",iNo--);
        printf("#\t");
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
