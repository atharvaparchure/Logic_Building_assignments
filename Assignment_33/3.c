#include <stdio.h>

void checkBits(int number) {
    int mask9  = 1 << (9 - 1);   
    int mask12 = 1 << (12 - 1);

    int is9On  = number & mask9;
    int is12On = number & mask12;

    printf("9th bit is %s\n",  is9On  ? "ON (1)" : "OFF (0)");
    printf("12th bit is %s\n", is12On ? "ON (1)" : "OFF (0)");
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkBits(number);

    return 0;
}
