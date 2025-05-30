///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept N numbers from user and accept another number from user and check whethe the number is present or not
/*
    Input :  N: 6
    Element you want to search : 66
    Elements : 85 66 11 80 93 88 
    Output : 66 is present
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL; 

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0 ;
    
    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE ;
            break;
        }
        
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter number you want to search : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    printf(" Enter %d elements : ",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

        bRet =  Check(p,iSize,iValue);

        if(bRet == TRUE)
        {
            printf("%d is present\n",iValue);
        }
        else
        {
            printf("%d is not present\n",iValue);
        }
    
    free(p);

    return 0;
}