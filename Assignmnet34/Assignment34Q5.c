// Description : Write a program which returns the smallest element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int Minimum(PNODE first )
{
    PNODE temp = NULL;
    temp = first;
    int iMin  =  0;
    iMin = temp->data;

    while(temp != NULL)
    {
       if(temp->data < iMin)
       {
            iMin = temp->data;
       }
        temp = temp->next;
    }
    return iMin;
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

    InsertFirst(&head , 640);
    InsertFirst(&head , 240);
    InsertFirst(&head , 20);
    InsertFirst(&head , 230);
    InsertFirst(&head , 110);

    Display(head);

    iRet = Minimum(head);

    printf("Minimum of the elements is : %d\n",iRet);

    return 0;
}