#include <stdio.h>

void Display(int iRow)
{
   int i = 0 , j = 0;
   for(i = 0; i < 2 ; i++)
   {
    for (j = 0; j < iRow; j++)
    {
        if(i == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
   }
   

}

int main()
{

    int iValue1 = 0;
    printf("Enter number ");
    scanf("%d",&iValue1);
   

    Display(iValue1);
    return 0;
}