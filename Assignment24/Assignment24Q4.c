////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept string from user and check whether it contains vowel or not
/*
    Input : Demo
    Output : it contains vowel
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
        while(*str != '\0')
        {
        
            if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
            {
                return TRUE;
            }
            str++;
        }
        if(*str == '\0')
        {
            return FALSE;
        }


}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string : ");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("Does not contain Vowel");
    }

    return 0;
}