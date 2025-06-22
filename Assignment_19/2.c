#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[], int iSize)
{
    int iCnt = 0 ,iCounte = 0, iCounto = 0, iDiff = 0;
    
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
     
        if((arr[iCnt] % 2) == 0)
        {
            iCounte++;
        }
        else
        {
            iCounto++;
        }
       
    }
    
    printf("\n");
    iDiff = iCounte - iCounto;
    return iDiff;


}

int main()
{
    int iValue = 0, iCnt = 0, iRet = 0;
    int *p = NULL;
    printf("Enter number of elements:\n");
    scanf("%d",&iValue);
    p = (int *)malloc(iValue * sizeof(int));
    if(p == NULL)
    {
        printf("Unablle to allocate memory");
        return -1;
    }


    printf("Enter %d elements:\n", iValue);
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p , iValue);
    printf("Difference between Even and odd numbers are: %d",iRet);

    
    free(p);
    return 0;

}