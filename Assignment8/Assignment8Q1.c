/////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accepts radius of circle from user and calculate its area
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//#define PI 3.14f;


double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %f",dRet);
    
    return 0;
}