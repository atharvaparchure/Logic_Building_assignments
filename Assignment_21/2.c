#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


int CheckNumber(int arr[], int iSize)
{
    int iCnt = 0;
    int iMin = arr[0];  

    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] < iMin)
        {
            iMin = arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iValue = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iValue);

    p = (int *)malloc(iValue * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iValue);
    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = CheckNumber(p, iValue);
    printf("The smallest number is: %d\n", iRet);

    free(p);
    return 0;
}
