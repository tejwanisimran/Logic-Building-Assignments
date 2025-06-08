/////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept character from user and check whether it is a small case or not(a-z)
/*
    Input : a
    Output : it is a small case character

    Input : D
    Output : it is not a small case character
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a small case character\n",cValue);
    }
    else
    {
        printf("%c is not a small case character\n",cValue);
    }

    return 0;
}