#include<stdio.h>
#define PI 3.14

float DisplayArea(float  fRad)
{
    float fArea = 0.0f;
    fArea = PI * fRad * fRad;
    return fArea;

}

int main()
{
    float fValue = 0;
    float dRet = 0;
    printf("Enter radius: \n");
    scanf("%f",&fValue);

    dRet = DisplayArea(fValue);
    printf("Area of circle is : %f",dRet);
    return 0;
     
}