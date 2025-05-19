#include<stdio.h>


float Squaredmeter(float  fSqu)
{
 float fMet = 0.0f;
 fMet = fSqu * 0.0929;
 return fMet;

}

int main()
{
    float fValue = 0.0f;
    float dRet = 0;
    printf("Enter area in square feet: \n");
    scanf("%f",&fValue);

    dRet = Squaredmeter(fValue);
    printf("Square meter is: %f",dRet);
    return 0;
     
}