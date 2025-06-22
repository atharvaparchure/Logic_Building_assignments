#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements exactly divisible by 5 are are even are:");
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
     
        if(((arr[iCnt] % 5) || (arr[iCnt] % 2)) == 0)
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
    Difference(p , iValue);
    
    free(p);
    return 0;

}