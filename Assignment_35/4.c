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

int SecMaximum(PNODE first)
{
    int max1 = 0;
    int max2 = 0;

    if(first->data > first->next->data)
    {
        max1 = first->data;
        max2 = first->next->data;
    }
    first = first->next->next;

    while(first != NULL)
    {
        if(first->data > max1)
        {
            max2 = max1;
            max1 = first->data;
            
        }
        else if((first->data < max1) && (first->data > max2))
        {
            max2 = first->data;
        }
        first = first->next;
    }
    return max2;
    
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

    

    iRet = SecMaximum(head);
    printf("Second Maximum number is : %d",iRet);

    
    return 0;
}