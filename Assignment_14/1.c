#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, num = 1;
    

    for(i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d",num);
            num++;
            if(num > 9)
            {
                num = 1;
            }
            
        }
        
        printf("\n");
        
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);
    printf("Enter number of Colomns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
}