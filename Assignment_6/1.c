#include<stdio.h>
#define ERR_INVALID_INPUT

void Number(int iNo)
{
    if(iNo < 0)
    {
        return ERR_INVALID_INPUT;
    }
    if((iNo > 0) && (iNo < 50))
    {
        printf("small");
    }
    if((iNo >= 50) && (iNo < 100))
    {
        printf("medium");
    }
 if((iNo > 100))
    {
        printf("large");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;

}