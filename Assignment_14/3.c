#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch;

    for (i = 1; i <= iRow; i++)
    {
        if (i % 2 == 1)  
        {
            ch = 'a';
            for (j = 1; j <= iCol; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        else  
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter number of columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
