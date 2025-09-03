#include<stdio.h>

void Display()
{
    static int no = 1;

    if(no <= 5)
    {
        printf("* \t");
        no++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}