#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>

T AddN(T *arr,int iSize)
{
    T sum ;
    int i = 0;

    //filter
    for(i = 0; i< size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    int iSum = AddN(arr,5);
    printf("%d",iSum);
    float fSum = AddN(brr,4);
    printf("%f",fSum);   

    return 0;
}