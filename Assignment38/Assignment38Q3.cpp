// Description : Write a genric program which accept N values from user and return addition of that N values.

#include<iostream>
using namespace std;

template<class T>

T AddN(T *Arr , int iSize)
{
    T sum  = 0;
    int i = 0;
    if(iSize < 0)
    {
        printf("Invallid Input!!!");
        return -1;
    }    

    for(i = 0; i< iSize; i++)
    {
        sum = sum + Arr[i];
    }
    return sum;
}
int main()
{
    int iRet = 0;
    double dRet = 0.0; 
    int Arr[] = {10,20,30,40,50,60};
    double Brr[] = {10.23,20.36,62.35,89.21};

    iRet = AddN(Arr , 6);
    cout<<"Summation is : "<<iRet<<"\n";
    dRet = AddN(Brr , 4);
    cout<<"Summation is : "<<dRet<<"\n";
    
}