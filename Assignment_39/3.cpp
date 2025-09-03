#include<stdio.h>
#include<iostream>

using namespace std;

template <class T>

int SearchFirst(T *arr, int iSize, T iNo)
{
    int i = 0;
    int ifirst = 0;

    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    printf("%d\n",iRet);

    return 0;
}