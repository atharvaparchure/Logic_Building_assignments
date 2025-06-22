#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


void CheckNumber(int arr[], int iSize)
{
    int iCnt = 0;
    int iDigitCount = 0;
    int num = 0;

    printf("Numbers containing exactly 3 digits are:\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        num = arr[iCnt];
        iDigitCount = 0;
        
        if (num == 0)
        {
            iDigitCount = 1;
        }
        else
        {
            while (num != 0)
            {
                iDigitCount++;
                num /= 10;
            }
        }

        if (iDigitCount == 3)
        {
            printf("%d\t", arr[iCnt]);
        }
    }

    printf("\n");
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

    
    CheckNumber(p, iValue);

    free(p);
    return 0;
}
