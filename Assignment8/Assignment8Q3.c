///////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accepts distance in kilometer and convert it into meter
///////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iCnt = 0,iResult = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iResult = iNo *1000;
    }
    return iResult;

    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d",iRet);

    return 0;
}