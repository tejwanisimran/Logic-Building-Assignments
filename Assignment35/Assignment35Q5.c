// Description : Write a program which displays the addition of digits of element from singly linear linked list.

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

void SumDigit(PNODE first)
{
    int iDigit = 0 , iSum = 0 , iCnt = 0;
    PNODE temp = NULL;
    temp = first;

    iSum = 0;

    while(temp != NULL)
    {
        iSum = 0;
        while(temp->data != 0)
        {
            iDigit = (temp->data) % 10;
            iSum = iSum + iDigit;
            temp->data = temp->data / 10;
        }
        printf("%d\t",iSum);

        temp = temp->next;
    }
    return iSum;
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

    SumDigit(head);

    
    return 0;
}