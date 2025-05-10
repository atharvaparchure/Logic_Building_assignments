#include <stdio.h>

void Accept(int iNo)
{
   int icnt = 0; 
   for (icnt = 1; icnt <= iNo; icnt ++ )
   {
        printf("* \t");
   }
}
int main()
{
    int iValue = 0;
    printf("Enter a number to print stars");
    scanf("%d",&iValue);

    Accept(iValue);



    return 0;

}