// Description : Write a program which returns the second maximum element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int SecMaximum(PNODE first)
{
    int Fmax = 0 , Smax = 0;
    PNODE temp = NULL;
    temp = first;
    
    while(temp != NULL)
    {
        if(temp->data > Fmax)
        {
            Smax = Fmax;
            Fmax = temp->data;
        }
        else
        {
            Smax = temp->data;
        }
        temp = temp->next;
    }
    return Smax;
}
void InsertFirst(PPNODE first , int no)
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
        printf("| %d | -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}



int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head , 240);
    InsertFirst(&head , 320);
    InsertFirst(&head , 230);
    InsertFirst(&head , 110);

    Display(head);

    iRet = SecMaximum(head);

    printf("Second Maximum element is : %d\n",iRet);
    
    return 0;
}