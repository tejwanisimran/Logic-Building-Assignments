///////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accept the number from user and display its all non factors
//////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ", iCnt);
        }

    }
}

int main()
{
    int iValue = 0; 

    printf("Enter a number : ");
    scanf("%d",&iValue);

     NonFact(iValue);

    return 0;
}