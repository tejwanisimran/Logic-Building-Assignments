// Description : Write a program which displays all palindrome element from singly linear linked list.

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

void DisplayPalindrome(PNODE first)
{
    int iDigit = 0 , iRev = 0 , iTemp = 0;
    PNODE temp = NULL;
    temp = first;


    while(temp != NULL)
    {
        iRev = 0;
        iTemp = temp->data;
        while(temp->data != 0)
        {
            iDigit = (temp->data) % 10;
            iRev = iRev * 10 + iDigit;
            temp->data = temp->data / 10;
        }
        if(iTemp == iRev)
        {
            printf("%d\t",iRev);
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
    InsertFirst(&head , 414);
    InsertFirst(&head , 17);
    InsertFirst(&head , 28);
    InsertFirst(&head , 11);

    Display(head);

    DisplayPalindrome(head);

    
    return 0;
}