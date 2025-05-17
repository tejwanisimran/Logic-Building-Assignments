///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Write a program which accept one number from userand print that number of even numbers on console
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int iCnt = 0;

    for(iCnt = 0; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2) == 0)
        {
            printf("%d\n",iCnt);
        }
    
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    PrintEven(iValue);
}