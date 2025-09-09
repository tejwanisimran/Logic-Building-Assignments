// Description : Write a genric program which accept N values from user and search the first occurence of any specific values.

#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T *Arr , int iSize , T No)
{
    int iCnt = 0 , iCount = 0;

    for(iCnt = 0; iCnt <= iSize ; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            return iCnt;
        }
    }
}
int main()
{
    int iRet = 0;
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    iRet = SearchFirst(Arr,9,40);
    cout<<"First Occurence is : "<<iRet<<"\n";

    return 0;
}