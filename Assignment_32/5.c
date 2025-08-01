#include <stdio.h>

int toggleFirstAndLastNibbles(int number) {
    int firstNibbleMask = 0xF0000000; 
    int lastNibbleMask  = 0x0000000F; 

    number = number ^ firstNibbleMask; 
    number = number ^ lastNibbleMask;  

    return number;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int modified = toggleFirstAndLastNibbles(number);
    printf("Modified number after toggling first and last nibbles: %d\n", modified);

    return 0;
}
