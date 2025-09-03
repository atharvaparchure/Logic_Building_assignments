#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }

}

void Display(PNODE first)
{
    PNODE temp = NULL;

    temp = first;
    while(temp != NULL)
    {
        printf("| %d |-> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void DisplayPrime(PNODE first)
{
    int iCnt = 0;
    int i = 0;
    int iDivCount = 0;

    while (first != NULL)
    {
        iDivCount = 0;

        for (i = 1; i <= first->data; i++)
        {
            if (first->data % i == 0)
            {
                iDivCount++;
            }
        }

        if (iDivCount == 2)
        {
            printf("%d\t", first->data);
        }

        first = first->next;  
    }
}

int main()
{

    PNODE head = NULL;
    int iRet = 0;
    int iValue = 0;

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    InsertFirst(&head, 51);

    InsertFirst(&head, 6);
    InsertFirst(&head, 28);

    Display(head);

    

    DisplayPrime(head);

    
    return 0;
}