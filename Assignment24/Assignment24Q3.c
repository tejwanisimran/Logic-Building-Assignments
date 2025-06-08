////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept string from user and return differnce between frequency of small characters and capital characters 
/*
    Input : MarvellouS
    Output : 6(8-2)
*/
#include<stdio.h>

int Difference(char *str)
{
    int iCap = 0,iSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCap++;
        }
       str++;
    
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
    }
    return iSmall - iCap;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n]s",arr);

    iRet = Difference(arr);

    printf("Difference is : %d",iRet);

    return 0;
}