///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept N numbers from user and accept another number from user and return index of its first occuerence 
/*
    Input :  N: 6
    Element you want to search : 66
    Elements : 85 66 11 80 93 88 
    Output : 1
*/
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0 ;
    
    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt ;
            break;
        }
    }
        if(iCnt == iLength)
        {
            printf("Number not found\n");
            return -1;
        }
        
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0,iRet = 0;
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

        iRet =  FirstOcc(p,iSize,iValue);

        printf("%d",iRet);
    
    free(p);

    return 0;
}