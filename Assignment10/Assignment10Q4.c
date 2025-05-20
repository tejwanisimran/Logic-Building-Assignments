
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Descrption : write a program which accept number from user and return the multiplication of digits
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int MultDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iResult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iResult =  iDigit * iResult  ;
    
        iCnt++;

        iNo = iNo / 10;
    }
        return iResult;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet =  MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}