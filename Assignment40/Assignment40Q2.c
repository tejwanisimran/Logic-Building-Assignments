// Description : Write a recursive program which display the below pattern 
/*
    Output : 1 2 3 4 5 
*/

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf(" %d\t ",iCnt);
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}