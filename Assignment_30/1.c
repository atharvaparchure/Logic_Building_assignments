#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check15thBit(int number)
{
    int mask = 1 << 14; 
    if ((number & mask) != 0)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    int value = 0;
    BOOL result = FALSE;

    printf("Enter a number: ");
    scanf("%d", &value);

    result = Check15thBit(value);

    if (result == TRUE)
        printf("15th bit is ON.\n");
    else
        printf("15th bit is OFF.\n");

    return 0;
}
