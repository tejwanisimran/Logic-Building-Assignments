////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accepts area in Square feet and convert it into square meter
////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double SquareMeter(int iValue)
{
    double dResult = 0.0;

    dResult = iValue *0.0929;
    
    return dResult;

    
}
int main()
{
    int iValue = 0; 
    double dRet = 0.0;

    printf("Enter area in square feet  : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf",dRet);

    return 0;
}