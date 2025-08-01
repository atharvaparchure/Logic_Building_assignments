#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

void CheckBits(unsigned int number)
{
    unsigned int mask1  = 1 << 0;   
    unsigned int mask32 = 1U << 31; 

    if (number & mask1)
        printf("1st bit is ON\n");
    else
        printf("1st bit is OFF\n");

    if (number & mask32)
        printf("32nd bit is ON\n");
    else
        printf("32nd bit is OFF\n");
}

int main()
{
    unsigned int value = 0;

    printf("Enter a positive number: ");
    scanf("%u", &value);  

    CheckBits(value);

    return 0;
}
