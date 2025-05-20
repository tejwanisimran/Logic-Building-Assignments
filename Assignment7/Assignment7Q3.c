//////////////////////////////////////////////////////////////////////////
// Description : write a program to find Even Factorial of a given number
//////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0,iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt %  2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
  int main()
  {
    int iValue = 0, iRet = 0;

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of an number is : %d",iRet);

    return 0;
  }