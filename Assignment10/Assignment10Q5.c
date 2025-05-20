//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accept number from user and return diffrernce between summation of even digits and summation of odd digits
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
            iCnt++;
        }
        
        if((iDigit % 2) != 0)
        {
            iSum2 = iSum2 + iDigit;
            iCnt++;
        }
        iNo = iNo / 10;

    }
    if(iSum1 < iSum2)
    {
        return iSum2 - iSum1;
    }
    else
    {
        return iSum1 - iSum2;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}