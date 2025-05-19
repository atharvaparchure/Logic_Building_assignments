#include<stdio.h>
#define PI 3.14

float KMtoMeter(int iKm)
{
    int iMeter = 0;
    iMeter = iKm * 1000;
    return iMeter;


}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Kilometers \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in meters is  %d",iRet);
    return 0;
     
}