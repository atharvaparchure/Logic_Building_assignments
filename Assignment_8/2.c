#include<stdio.h>
#define PI 3.14

float RectArea(float fWid, float fhei)
{
    float fArea = 0.0f;
    fArea = fWid * fhei;
    return fArea;

}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fRet = 0;
    printf("Enter width: \n");
    scanf("%f",&fValue1);

    printf("Enter height: \n");
    scanf("%f",&fValue2);

    fRet = RectArea(fValue1,fValue2);
    printf("Area of circle is : %f",fRet);
    return 0;
     
}