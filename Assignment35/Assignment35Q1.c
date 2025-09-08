// Description : Write a program which displays all the numbers which are perfect from singly linear linked list.

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

void DisplayPerfect(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int iCnt = 1 , iSum = 0;

    while (temp != NULL)
    {
        iSum = 0;
        
        for(iCnt = 1 ; iCnt <= (temp->data) / 2 ; iCnt++)
        {
            if((temp->data) % iCnt == 0)
            {
                iSum  = iSum + iCnt;
            }
        }

        if(temp->data == iSum)
        {
            printf("%d\t",temp->data);
        }
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

    InsertFirst(&head , 89);
    InsertFirst(&head , 6);
    InsertFirst(&head , 41);
    InsertFirst(&head , 17);
    InsertFirst(&head , 28);
    InsertFirst(&head , 11);

    Display(head);

    printf("Perfect elements are : \n");

    DisplayPerfect(head);

    return 0;
}