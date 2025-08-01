#include <stdio.h>

int OnFirst4Bits(int number)
{
    int mask = 0x0F;
    return number | mask;
}

int main()
{
    int value = 0, modifiedValue = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    modifiedValue = OnFirst4Bits(value);

    printf("Modified value after turning ON first 4 bits: %d\n", modifiedValue);

    return 0;
}
