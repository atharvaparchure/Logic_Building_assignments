#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

void CheckBits(int number)
{
    int mask15 = 1 << 14;  
    int mask7  = 1 << 6;   
    int mask21 = 1 << 20; 
    int mask28 = 1 << 27;  

    if (number & mask15)
        printf("15th bit is ON\n");
    else
        printf("15th bit is OFF\n");

    if (number & mask7)
        printf("7th bit is ON\n");
    else
        printf("7th bit is OFF\n");

    if (number & mask21)
        printf("21st bit is ON\n");
    else
        printf("21st bit is OFF\n");

    if (number & mask28)
        printf("28th bit is ON\n");
    else
        printf("28th bit is OFF\n");
}

int main()
{
    int value = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    CheckBits(value);

    return 0;
}
