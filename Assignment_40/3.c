#include<stdio.h>

void Display()
{
    static int no = 5;

    if(no >= 1)
    {
        printf("%d\t",no);
        no--;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}