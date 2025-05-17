//////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept one number from user andcheck whether the character is vowelor not
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>


bool ChkVowel(char cCh)
{
    char a = '\0',e = '\0',i = '\0',o = '\0',u = '\0',A = '\0',E = '\0',I = '\0',O = '\0',U = '\0';

    if((cCh == 'a') || (cCh == 'e') || (cCh == 'i') || (cCh == 'o') || (cCh == 'u') || (cCh == 'A') || (cCh == 'E') || (cCh =='I') || (cCh == 'O') || (cCh == 'U'))
    {
        return true ;
    }
    else 
    {
        return  false;
    }
}


int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("it is not a Vowel\n");
    }

    return 0;
}