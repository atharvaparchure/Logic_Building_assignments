#include <stdio.h>

void checkTwoBits(int number, int pos1, int pos2) {
    int mask1 = 1 << (pos1 - 1);
    int mask2 = 1 << (pos2 - 1);

    int isPos1On = number & mask1;
    int isPos2On = number & mask2;

    printf("Bit at position %d is %s\n", pos1, isPos1On ? "ON (1)" : "OFF (0)");
    printf("Bit at position %d is %s\n", pos2, isPos2On ? "ON (1)" : "OFF (0)");
}

int main() {
    int number, pos1, pos2;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter first bit position: ");
    scanf("%d", &pos1);

    printf("Enter second bit position: ");
    scanf("%d", &pos2);

    checkTwoBits(number, pos1, pos2);

    return 0;
}
