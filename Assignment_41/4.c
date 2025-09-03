#include<stdio.h>

void Display(int no)
{
    static char ch = 'A';   

    if(no > 0)
    {
        printf("%c\t", ch);
        ch++;
        Display(no - 1);   
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
