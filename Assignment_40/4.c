#include<stdio.h>

void Display()
{
    static char no = 'A';

    if(no <= 'F')
    {
        printf("%c\t",no);
        no++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}