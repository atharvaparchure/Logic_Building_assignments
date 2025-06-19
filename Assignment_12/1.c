#include <stdio.h>

void PrintAlphabets(int iRow, int iCol)
{
    
    int i = 0 , j = 0 ;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j <iCol; j++)
        {
            printf("*");
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
