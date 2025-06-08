/////////////////////////////////////////////////////////////////////////////////////////////
// Description : Write a program which accept character from user and if character is small then display its corresponding capital character and vice versa
/*
    Input : a
    Output : A
*/
#include<stdio.h>

void Display(char ch)
{   
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch-32;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch +32;
    }
    printf("%c",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character :");
    scanf("%c",&cValue);
    
    Display(cValue);

    return 0;
}