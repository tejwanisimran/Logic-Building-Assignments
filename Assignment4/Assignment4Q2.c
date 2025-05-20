//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accept number from user and display its factors in decresing order
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}