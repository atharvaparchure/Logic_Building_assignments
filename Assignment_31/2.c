
#include <stdio.h>

int Off7thAnd10thBit(int number)
{
    int mask = ~((1 << 6) | (1 << 9)); 
    return number & mask; 
}

int main()
{
    int value = 0, modifiedValue = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    modifiedValue = Off7thAnd10thBit(value);

    printf("Modified value after turning OFF 7th and 10th bits: %d\n", modifiedValue);

    return 0;
}
