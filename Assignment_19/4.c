#include <stdio.h>
#include <stdlib.h>

int CheckEleven(int arr[], int iSize)
{
    int iCnt;
    int iCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == 11)
        {
            iCount++;  
        }
    }

   return iCount;
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

    iRet = CheckEleven(p, iValue);
    printf("Number of 11 in the array is: %d",iRet);

    free(p);
    return 0;
}
