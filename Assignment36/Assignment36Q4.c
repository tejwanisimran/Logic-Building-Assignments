// Description : Write a program which displays smallest digits of all element from singly linear linked list.

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

void DisplaySmall(PNODE first)
{
    int iDigit = 0 , iMin = 0;
    PNODE temp = NULL;
    temp = first;


    while(temp != NULL)
    {
        iMin = 0;
        while(temp->data != 0)
        {
            iDigit = temp->data % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            temp->data = temp->data / 10;
        }
        printf("%d\t",iMin);
        temp = temp->next;
    }
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

    InsertFirst(&head , 415);
    InsertFirst(&head , 532);
    InsertFirst(&head , 250);
    InsertFirst(&head , 11);

    Display(head);

    DisplaySmall(head);

    
    return 0;
}