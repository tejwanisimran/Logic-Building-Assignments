/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : write a program which accepts number from user and if number is less than 50 then print small,if number is greater than 50 then print medium,if it is greater than 100 then print large 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
        if(iNo < 50)
        {
            printf("Small \n");
        }
        else if((iNo >= 50) && (iNo < 100))
        {
            printf("Medium \n");
        }
        else if(iNo >= 100)
        {
            printf("Large \n");
        }
    
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}