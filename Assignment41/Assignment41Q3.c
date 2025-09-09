// Description : Write a recursive program which display the below pattern 
/*
    Input : 5
    Output : 5 4 3 2 1 
*/
#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf(" %d\t ",iNo);
        Display(iNo-1);
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