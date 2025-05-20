////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accepts temperature in fahrenheit and convert it into celcius
////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dResult = 0.0;

    dResult = ((fTemp - 32) * (5.0 / 9.0));
    
    return dResult;

}

int main()
{
    float fValue = 0.0f; 
    double dRet = 0.0;

    printf("Enter temperature in faherenheit : ");
    scanf("%f",&fValue);
    
    dRet = FhtoCs(fValue);

    printf("Temperature in celcius is : %f",dRet);

    return 0;
}