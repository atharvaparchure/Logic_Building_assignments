#include <stdio.h>
#include <stdlib.h>


int CheckNumber(int arr[], int iSize)
{
    int iCnt  = 0,iProd = 1;
    

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((arr[iCnt] % 2) == 1)
        {
            iProd *=arr[iCnt];
          
        }
       
    }
    return iProd;

   
}

int main()
{
    int iValue = 0, iCnt = 0;
    int iRet = 0;
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
    printf("Product ofo odd elements is : %d\n",iRet);
   

    free(p);
    return 0;
}
