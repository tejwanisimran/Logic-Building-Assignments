////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program  which accept number from user and print its factorial
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0; 
    int iFact = 1;

    if(iNo < 0)
    {
        printf("Invalid input");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

printf("Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}