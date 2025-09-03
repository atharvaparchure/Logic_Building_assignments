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

int SearchFirstOcc(PNODE first, int no)
{
    int iIndex = 1;

    while (first != NULL)
    {
        if (first->data == no)
        {
            return iIndex;
        }
        first = first->next;
        iIndex++;
    }

    
    printf("Number not present\n");
    return -1; 
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

    Display(head);

    printf("Enter the number you want to search in the linked list:");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(head,iValue);

    printf("Index is : %d",iRet);
    return 0;
}