/////////////////////////////////////////////////////////////////////////////////
// Descrption : write a program which accepts N and print first 5 multiples of N
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0,iRet =0;

    for(iCnt = 1; iCnt <=5; iCnt++)
    {
            iRet = iCnt * iNo;
            printf("%d ",iRet);  
    }
}

int main()
{
    int iValue =0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;

}