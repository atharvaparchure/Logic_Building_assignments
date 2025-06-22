#include <stdio.h>
#include <stdlib.h>


int CheckNumber(int arr[], int iSize, int iStart, int iEnd)
{
    int iCnt;
    

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] >= iStart && arr[iCnt] <= iEnd)
 
        {
            printf("%d\t", arr[iCnt]);
          
        }
       
    }

   
}

int main()
{
    int iSize = 0, iCnt = 0,  iValue1 = 0 , iValue2 = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);
     printf("Enter the starting point:");
    scanf("%d",&iValue1);
     printf("Enter the ending point:");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }
   

     CheckNumber(p, iSize, iValue1, iValue2);
    
   

    free(p);
    return 0;
}
