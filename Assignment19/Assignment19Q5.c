///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept N numbers from user and rteurn frequency of 11 from it
/*
    Input :  N: 6
    Elements : 85 66 11 80 93 88 
    Output : 1
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iCount = 0 ;
    
    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0,iValue =0;
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

        iRet =  Frequency(p,iSize,iValue);

        printf("Frequency is : %d",iRet);

    free(p);

    return 0;
}