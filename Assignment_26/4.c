#include<stdio.h>

int strrevX(char *str, char Cfreq)
{
    int iCnt = 0, iCount = -1;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == Cfreq)
        {
            iCount = iCnt;;
        }
        iCnt++;
    }
    return iCount;
    
   
}

int main()
{
    char Arr[50] = {'\0'};
    char ch ='\0';
    int bRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character to find: \n");
    scanf(" %c",&ch);

    bRet = strrevX(Arr,ch);
    
    if(bRet == -1)
    {
        printf("Character '%c' not found in the string.\n", ch);
    }
    else
    {
        printf("Character '%c' is found at index %d\n", ch, bRet);
    }
       

    return 0;
}

// Time Complexity O(N+N/2)