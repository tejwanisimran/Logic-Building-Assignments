////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program  which Accepts US dollar and return its corresponding indian currency consider 1$ as 70 rupees
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0,iResult = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iResult = iNo *70;
    }
    return iResult;
} 

int main()
{
    int iValue =0 ,iRet = 0;

    printf("Enetr a number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is : %d ",iRet);

    return 0;
}