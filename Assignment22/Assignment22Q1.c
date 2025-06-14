////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept character from user and check whether it is alphabet or not(A-Z,a-z)
/*
    Input : F
    Output : it is a character

    Input : &
    Output : it is not a character
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("%c is character\n",cValue);
    }
    else
    {
        printf("%c is not a charcter\n",cValue);
    }

    return 0;
}