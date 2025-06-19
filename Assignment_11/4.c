#include <stdio.h>

void PrintAlphabets(int iNo)
{
    
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" #\t%d\t*\t",iCnt);
        
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
