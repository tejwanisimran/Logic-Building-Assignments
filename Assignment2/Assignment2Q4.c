/////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept two numbers from user and display first number in second number of times
/////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Output is : %d",iCnt);
    }

}


int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter Number : ");
    scanf("%d",iValue);
    printf("Enter frequency : ");
    scanf("%d",iCount);
    Display(iValue,iCount);
    return 0;
}



