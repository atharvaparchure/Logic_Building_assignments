#include <stdio.h>
#include <stdlib.h>


int CheckNumber(int arr[], int iSize, int iFreq)
{
    int iCnt;
    

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == iFreq)
        {
            return iCnt;
          
        }
       
    }

   
}

int main()
{
    int iValue = 0, iCnt = 0,  iValue1 = 0;
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
    printf("Enter a number you want to find :");
    scanf("%d",&iValue1);

    iRet = CheckNumber(p, iValue, iValue1);
    printf("Number is at index : %d\n",iRet);
   

    free(p);
    return 0;
}
