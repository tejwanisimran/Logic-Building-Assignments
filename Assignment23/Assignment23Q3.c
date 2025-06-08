/////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept character from user and if character is capital then print all the characters upto Z anf if it is small then print characters upto a
/*
    Input : S
    Output : S T U V W X Y Z
    Input : e
    Output : e d c b a
*/
#include<stdio.h>

void Display(char ch)
{   
    int iCnt = 0;
    char cChar = '\0';

    if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch ; iCnt >='a'; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch ; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character :");
    scanf("%c",&cValue);
    
    Display(cValue);

    return 0;
}