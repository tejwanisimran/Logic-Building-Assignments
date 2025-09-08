// Description : Write a program which display addition of all even elements from singly linear linked list.

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

int AdditionEven(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int iSum = 0 , iCnt = 0;

    while(temp->next != NULL)
    {
        if((temp->data) % 2 == 0)
        {
            iSum = iSum + temp->data;
        }
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

    InsertFirst(&head , 41);
    InsertFirst(&head , 32);
    InsertFirst(&head , 20);
    InsertFirst(&head , 11);

    Display(head);

    iRet = AdditionEven(head);

    printf("Addition of even elements are : %d\n",iRet);
    
    return 0;
}