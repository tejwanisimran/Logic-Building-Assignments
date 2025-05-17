///////////////////////////////////////////////////////////////////////////////////////
// Description : Accept one number from the user and print that number of * on console
///////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    iCnt=iNo;
    while(iCnt>=1)
    {
        printf("*\n");
        iCnt--;
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Display(iValue);


    return 0;
}