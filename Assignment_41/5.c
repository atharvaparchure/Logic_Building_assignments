#include<stdio.h>

void Display(int no)
{
    static char ch = 'a';   // starts from A

    if(no > 0)
    {
        printf("%c\t", ch);
        ch++;
        Display(no - 1);   // reduce count
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
