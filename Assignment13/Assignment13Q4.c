/////////////////////////////////////////////////////////////////////////////////////////////////
// Description : accept number of rows and number of columns from user and display below pattern
/*
    Input : iRow =  , iCol = 4
    Output :    4 4 4 4 
                3 3 3 3 
                2 2 2 2 
                1 1 1 1 
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt = 0 , i = 0 ,j = 0;

    for(i = 1,iCnt = iRow; i <= iRow; i++,iCnt--)
    {
        for(j = 1; j <= iCol; j++)
        {
          printf("%d\t",iCnt);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}