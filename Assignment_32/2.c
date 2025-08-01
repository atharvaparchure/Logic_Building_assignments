#include <stdio.h>

int offBit(int number, int position) {
    int mask = 1 << (position - 1);
    return number & ~mask;
}

int main() {
    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit position to turn OFF (1-based index): ");
    scanf("%d", &position);

    int modified = offBit(number, position);
    printf("Modified number after turning OFF bit %d: %d\n", position, modified);

    return 0;
}
