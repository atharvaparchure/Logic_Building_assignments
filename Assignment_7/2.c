#include <stdio.h>

int DollertoInr(int iNo)
{
    iNo =iNo * 70;
    return iNo;
}




int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter amount in rupees");
    scanf("%d",&iValue);

    iRet = DollertoInr(iValue);
    printf("%d is converted to %d in dollers",iValue ,iRet);


}