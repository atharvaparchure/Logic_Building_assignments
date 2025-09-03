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

void Reverse(PNODE first)
{
    int iDigit = 0;
    
    while(first != NULL)
    {
        int no = first->data;
        int original = no;
        int Reverse = 0;
        
        while(no != 0)
        {
            iDigit = no % 10;
           
            Reverse = Reverse *10 + iDigit;
            no = no / 10;
            
        }
        if(original == Reverse)
        {
            printf("%d\t",original);
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

    

    Reverse(head);
    

    
    return 0;
}