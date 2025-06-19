#include <stdio.h>

void PrintAlphabets(int count)
{
    char ch = 'A';
    int i;

    for (i = 0; i < count; i++)
    {
        printf("%c ", ch++);
    }
}

int main()
{
    int iValue;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    PrintAlphabets(iValue);

    return 0;
}
