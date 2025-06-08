///////////////////////////////////////////////////////////////////////////////
// Description : Accept a character from user and check whether it is special symbol or not
/*
    Input : &
    Output : true
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool bFlag = false;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        bFlag =  false;
    }
    else
    {
        bFlag =  true;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("%c is a special character\n",cValue);
    }
    else
    {
        printf("%c is a not a special character\n",cValue);
    }

    return 0;
}