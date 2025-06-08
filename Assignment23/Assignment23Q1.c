/////////////////////////////////////////////////////////////////////////////////////////////
// Description : Write a program which displays ASCII table

#include<stdio.h>

void DisplayASCII()
{   printf("ASCII Value (Decimal,HexaDecimal,Octal) ");
    int iCnt = 0;
    for(iCnt = 0; iCnt <= 126; iCnt++)
    {
    printf(" %c\n%d\t%x\t%o\t ",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    
    DisplayASCII();

    return 0;
}