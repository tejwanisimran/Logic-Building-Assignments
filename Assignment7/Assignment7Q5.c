/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which returns diffrerence between Even factorial and odd factorialof a given number
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0,iFact1 = 1, iFact2 = 1,iDiff =0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
      if((iCnt %  2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
        if(iFact1 < iFact2)
        {
          iDiff = iFact2 - iFact1;
        }
        else
        {
          iDiff = iFact1 - iFact2;
        }

    }
    return iDiff;
}
  int main()
  {
    int iValue = 0, iRet = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Even Factorial of an number is : %d",iRet);

    return 0;
  }