// Description : Write a recursive program which display the below pattern 
/*
    Input : 6
    Output : A B C D E F
*/
#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;
    static char ch = 'A';

    if(iCnt < iNo)
    {
        printf("%c\t",ch);
        ch++;
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