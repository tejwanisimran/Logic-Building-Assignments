//////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accept number from user and check whether it contains 0 or not
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)  //Filter
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            return TRUE;
        }
        else 
        {
            return FALSE;
        }
        iCnt++;
    }
}

int main()
{
     int iValue = 0;
     BOOL bRet = FALSE;

     printf("Enter a number : ");
     scanf("%d",&iValue);

     bRet = ChkZero(iValue);

    if(bRet == TRUE )
    {
        printf("It contains Zero");
    }
    else
    {
        printf("It does not contain Zero");
    }
     return 0;
}