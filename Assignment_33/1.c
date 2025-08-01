#include <stdio.h>

int countOnBits(int number) {
    int count = 0;

    while (number != 0) {
        if ((number & 1) == 1) {
            count++;
        }
        number = number >> 1;  
    }

    return count;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = countOnBits(number);
    printf("Number of ON (1) bits: %d\n", result);

    return 0;
}
