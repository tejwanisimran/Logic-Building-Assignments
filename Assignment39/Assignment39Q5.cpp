// Description : Write a genric program which accept N values from user and reverse the contents.

#include<iostream>
using namespace std;

template<class T>

void Reverse(T *Arr , int iSize )
{
    int iStart = 0;
    int iEnd = iSize - 1;
    T temp ;
    int i = 0;

    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;
        iStart++;
        iEnd--;
    }
    cout<<"Updated array is : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
}
int main()
{
    int iRet = 0 , i = 0;
    int Arr[] = {10,20,30,10,30,40,10,40,10};
   
    for(i = 0; i < 9; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
    Reverse(Arr,9);

    return 0;
}