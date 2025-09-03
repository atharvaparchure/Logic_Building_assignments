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

int Maximum(PNODE first)
{
    int iMax = 0;

    while (first != NULL)
    {
       if(first->data > iMax)
       {
        iMax = first->data;
       }
       first = first->next;
    }
    return iMax;        
}


int main()
{

    PNODE head = NULL;
    int iRet = 0;
   

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    InsertFirst(&head, 51);


    Display(head);

  

    iRet = Maximum(head);

    printf("Maximum is %d",iRet);
    return 0;
}