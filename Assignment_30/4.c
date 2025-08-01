#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

void CheckBits(int number)
{
    int mask7 = 1 << 6;  
    int mask8 = 1 << 7;  
    int mask9 = 1 << 8;  

    if (number & mask7)
        printf("7th bit is ON\n");
    else
        printf("7th bit is OFF\n");

    if (number & mask8)
        printf("8th bit is ON\n");
    else
        printf("8th bit is OFF\n");

    if (number & mask9)
        printf("9th bit is ON\n");
    else
        printf("9th bit is OFF\n");
}

int main()
{
    int value = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    CheckBits(value);

    return 0;
}
