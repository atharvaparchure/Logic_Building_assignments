#include <stdio.h>

void displayOnBitPositions(int number) {
    printf("ON bits found at positions: ");

    int position = 1;

    while (number != 0) {
        if (number & 1) {
            printf("%d ", position);
        }
        number = number >> 1;
        position++;
    }

    printf("\n");
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    displayOnBitPositions(number);

    return 0;
}
