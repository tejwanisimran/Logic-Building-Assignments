// Description : Write a program which displays all the numbers which are prime from singly linear linked list.

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

void DisplayPrime(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int iCnt = 0 ;

    while (temp != NULL)
    {
        for(iCnt = 2; iCnt <= (temp->data / 2)  ; iCnt++)
        {
            if((temp->data) % iCnt != 0)
            {
                printf("%d\t",temp->data);
            }
            break;
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

    InsertFirst(&head , 89);
    InsertFirst(&head , 22);
    InsertFirst(&head , 41);
    InsertFirst(&head , 17);
    InsertFirst(&head , 20);
    InsertFirst(&head , 11);

    Display(head);

    printf("Prime elements are : \n");

    DisplayPrime(head);

    return 0;

}
