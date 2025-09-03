#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>

T Multiply(T no1, T no2)
{
    T ans = 0;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iret = Multiply(10,20);

    printf("%d\n",iret);

    float iRet = Multiply(10.0f,20.0f);

    printf("%f\n",iRet);

    return 0;
}