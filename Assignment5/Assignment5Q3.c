/////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accept number from user and print its number line
/////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
    }
}


int main()
{
    int iValue =0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}