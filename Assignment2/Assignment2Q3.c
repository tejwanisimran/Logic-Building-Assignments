/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept one number from user and if number is less from 10 then print Hello otherwise print Demo
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }

}
int main()
{
    int iValue= 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}