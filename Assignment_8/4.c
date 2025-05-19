#include<stdio.h>


float FhtoCs(float  fTemp)
{
    float fCel = 0.0f;
    fCel = (fTemp - 32) *(5.0 / 9.0);
    return fCel;

}

int main()
{
    float fValue = 0.0f;
    float dRet = 0;
    printf("Enter temperature in fahrenhite: \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temp is: %f",dRet);
    return 0;
     
}