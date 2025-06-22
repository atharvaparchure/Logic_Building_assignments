#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


void CheckNumber(int arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int num = 0;
    int iSum = 0;


    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        num = arr[iCnt];
        iDigit = 0;
        
        while(num != 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
           
        }
         
        printf("Sum of %d is %d\n", arr[iCnt], iSum);
    }
    

    
}


int main()
{
    int iValue = 0, iCnt = 0 ,iRet = 0;
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
    // printf("sum of digits is : %d", iRet);

    free(p);
    return 0;
}
