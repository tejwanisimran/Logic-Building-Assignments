// Description : Write a program which search the first occurence of a particular elementfrom singly linear linked list.

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

int SearchFirstOcc(PNODE first , int iNo)
{
    PNODE temp = NULL;
    temp = first;
    int iPos = 1;

    while(temp != NULL)
    {
        if(temp->data == iNo)
        {
            return iPos;
        }
        temp = temp->next;
        iPos++;
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
    int iValue = 0 , iRet = 0;

    InsertFirst(&head , 101);
    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    printf("Enter the element that you want to search : ");
    scanf("%d\n", &iValue);

    iRet = SearchFirstOcc(head , iValue);

    printf("Occurence of the element is : %d\n",iRet);

    return 0;
}