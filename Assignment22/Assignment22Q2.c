////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept character from user and check whether it is capital or not(A-Z)
/*
    Input : F
    Output : it is a Capital

    Input : &
    Output : it is not Capital
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("%c is capital\n",cValue);
    }
    else
    {
        printf("%c is not capital\n",cValue);
    }

    return 0;
}