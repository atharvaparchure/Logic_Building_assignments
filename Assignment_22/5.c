#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;


void DisplaySchedule(char Cchar)
{
    if((Cchar == 65) || (Cchar == 97)) 
    {
        printf("Your exam is it 7 AM");
    }
    if((Cchar == 66) || (Cchar == 98)) 
    {
        printf("Your exam is it 8:30 AM");
    }
    if((Cchar == 67) || (Cchar == 99)) 
    {
        printf("Your exam is it 7 AM");
    }
    if((Cchar == 68) || (Cchar == 100)) 
    {
        printf("Your exam is it 7 AM");
    }
   
     

   
}

int main()
{
    char ch = '\0';
    bool bRet = FALSE;
    printf("Enter a character :\n");
    scanf("%c", &ch);

     DisplaySchedule(ch);
    
    return 0;
}
