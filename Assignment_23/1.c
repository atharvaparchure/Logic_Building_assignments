#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;

void DisplayASCIITable()
{
    int i = 0;

    printf("------------------------------------------------------------\n");
    printf("| %-12s | %-10s | %-10s | %-10s |\n", "Symbol", "Decimal", "Hex", "Octal");
    printf("------------------------------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        if ((i < 32) || (i == 127))
        {
            printf("| %-12s | %-10d | %-10X | %-10o |\n", "Non-Print", i, i, i);
        }
        else
        {
            printf("| %-12c | %-10d | %-10X | %-10o |\n", i, i, i, i);
        }
    }

    printf("------------------------------------------------------------\n");
}

int main()
{
    DisplayASCIITable();
    return 0;
}
