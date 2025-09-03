#include<stdio.h>

void Display()
{
    static int no = 1;

    if(no <= 5)
    {
        printf("%d\t",no);
        no++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}