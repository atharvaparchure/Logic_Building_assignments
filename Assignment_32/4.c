#include <stdio.h>

int toggleBit(int number, int position) {
    int mask = 1 << (position - 1);
    return number ^ mask;
}

int main() {
    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit position to toggle (1-based index): ");
    scanf("%d", &position);

    int modified = toggleBit(number, position);
    printf("Modified number after toggling bit %d: %d\n", position, modified);

    return 0;
}
