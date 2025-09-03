#include<stdio.h>

void Display()
{
    static char no = 'a';

    if(no <= 'f')
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