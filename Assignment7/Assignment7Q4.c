//////////////////////////////////////////////////////////////////////////
// Description : write a program to find Odd Factorial of a given number
//////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0,iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt %  2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
  int main()
  {
    int iValue = 0, iRet = 0;

    printf("Enetr a Number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Even Factorial of an number is : %d",iRet);

    return 0;
  }