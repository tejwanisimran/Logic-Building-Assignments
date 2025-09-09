// Description : Write a genric program which accept N values from user and count the frequency of specific values.

#include<iostream>
using namespace std;

template<class T>

int Frequency(T *Arr , int iSize , T No)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = 0; iCnt <= iSize ; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iRet = 0;
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    iRet = Frequency(Arr,9,10);
    cout<<"Frequency is : "<<iRet<<"\n";

    return 0;
}