//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accept number from user and return difference between the summation of all its all factors and non factors
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt =0; int iSum1 =0; int iSum2 =0,iDiff = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 +iCnt;
        }

        else
        {
            iSum2 =iSum2 + iCnt;
        }
    }

    if(iSum1 < iSum2)
    {
        iDiff = iSum2 - iSum1;
    }
    else
    {
        iDiff = iSum1 - iSum2;
    }

    return iDiff;
    
}

int main()
{
    int iValue = 0; 
    int iRet =0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}