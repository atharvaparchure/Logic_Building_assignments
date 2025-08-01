#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

void Check15thAnd8thBit(int number)
{
    int mask15 = 1 << 14; 
    int mask8 = 1 << 7;   

    if ((number & mask15) != 0)
        printf("15th bit is ON\n");
    else
        printf("15th bit is OFF\n");

    if ((number & mask8) != 0)
        printf("8th bit is ON\n");
    else
        printf("8th bit is OFF\n");
}

int main()
{
    int value = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    Check15thAnd8thBit(value);

    return 0;
}
