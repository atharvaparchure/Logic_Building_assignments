#include <stdio.h>

int Off7thBit(int number)
{
    int mask = ~(1 << 6); 
    return number & mask; 
}

int main()
{
    int value = 0, modifiedValue = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    modifiedValue = Off7thBit(value);

    printf("Modified value after turning OFF 7th bit: %d\n", modifiedValue);

    return 0;
}
