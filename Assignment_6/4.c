#include <stdio.h>

int DisplayTable(int iNo)
{
    int icnt = 0;
   
        for (icnt = 1; icnt <= 10 ;icnt++)
        {
            printf(" %d\n",  iNo * icnt);

        }
      
}
int main()
{
    int iValue = 0;
    int iret = 0;
    printf("Enter a number");
    scanf("%d",&iValue);
    iret =DisplayTable(iValue);
    
    printf("Table is  %d ",iret);
    return 0;

}