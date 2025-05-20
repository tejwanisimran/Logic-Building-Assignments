///////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accept the number from user and print its table
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt =0; int iRet =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iRet = iCnt * iNo;
        printf("%d ",iRet);

    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}