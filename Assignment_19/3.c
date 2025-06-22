#include <stdio.h>
#include <stdlib.h>

void CheckEleven(int arr[], int iSize)
{
    int iCnt;
    int isPresent = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == 11)
        {
            isPresent = 1;  
        }
    }

    if (isPresent)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }
}

int main()
{
    int iValue = 0, iCnt = 0;
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

    CheckEleven(p, iValue);

    free(p);
    return 0;
}
