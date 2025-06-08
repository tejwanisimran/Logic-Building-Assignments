///////////////////////////////////////////////////////////////////////////////
// Description : Accept a character from user and display its ASCII value in decimal ,octal,hexadecimal
/*
    Input : A
    Output : Decimal = 65
             Octal = 0101
             Hexadecimal : 0X41
*/

#include<stdio.h>

void Display(char ch)
{
    printf("ASCII value in Decimal is %d\n",ch);
    printf("ASCII value in Octal is %o\n",ch);
    printf("ASCII value in Hexadecimal is %x\n",ch);


}

int main()
{
    char cValue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}