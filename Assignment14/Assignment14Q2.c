/////////////////////////////////////////////////////////////////////////////////////////////////
// Description : accept number of rows and number of columns from user and display below pattern
/*
    Input : iRow =4 , iCol = 4
    Output :   2 4 6 8 10
                1 3 5 7 9 
                2 4 6 8 10
                1 3 5 7 9 
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt = 0 , i = 0 ,j = 0 ,iNo = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,iCnt =1,iNo = 1; j <= iCol; j++,iCnt = (iCnt + 2),iNo = (iNo*2))
        {
            if((i % 2) != 0)
            {
                printf("%d\t",iNo);
            }
            else
            {
                printf("%d\t",iCnt);
            }
            
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