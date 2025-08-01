#include <stdio.h>

int toggleBitsInRange(int number, int start, int end) {
    int mask = 0;

    for (int i = start; i <= end; i++) {
        mask |= (1 << (i - 1));
    }

    return number ^ mask;
}

int main() {
    int number, start, end;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter start position of range: ");
    scanf("%d", &start);

    printf("Enter end position of range: ");
    scanf("%d", &end);

    int modified = toggleBitsInRange(number, start, end);
    printf("Modified number after toggling bits from position %d to %d: %d\n", start, end, modified);

    return 0;
}
