#include <stdio.h>
#include <stdbool.h>

bool isBitOn(int number, int position) {
    int mask = 1 << (position - 1);
    return (number & mask) != 0;
}

int main() {
    int number, position;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit position to check (1-based index): ");
    scanf("%d", &position);

    if (isBitOn(number, position)) {
        printf("Bit at position %d is ON (1)\n", position);
    } else {
        printf("Bit at position %d is OFF (0)\n", position);
    }

    return 0;
}
