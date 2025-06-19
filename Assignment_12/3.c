#include <stdio.h>

void PrintAlphabets(int iRow, int iCol)
{
    
    int i = 0 , j = 0 ;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);
    printf("Enter number of coloumns: ");
    scanf("%d", &iValue2);

    PrintAlphabets(iValue1,iValue2);

    return 0;
}
