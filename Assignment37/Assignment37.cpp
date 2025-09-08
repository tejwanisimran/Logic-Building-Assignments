// Description : Complete below code snippet by writing definations of below function.
/*
               : SearchLast() :- Search last occurence of number.
               : EvenCount()  :- Count Even elements.
               : OddCount()   :- Count Odd elements.
               : SummAll()    :- Sum of all elements.
*/

#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int iSize;
    public:
        Array(int iValue = 10)
        {
            cout<<"Inside Constructor\n";
            this->iSize = iValue;
            this->Arr = new int[iSize];
        }
        Array(Array &ref)
        {
            cout<<"Inside Copy Constructor\n";
            this->iSize = ref.iSize;
            this->Arr = new int[this->iSize];

            for(int i = 0 ; i < iSize ; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }
        ~Array()
        {
            cout<<"Inside Destructor";
            delete[]Arr;
        }

        inline void Accept();
        inline void Display();
};
void Array :: Accept()
{
    cout<<"Please enter the elements : \n";

    for(int i = 0; i < this->iSize ; i++)
    {
        cin>> Arr[i];
    }
}
void Array :: Display()
{
    cout<<"Elements are : \n";

    for(int i = 0; i < this->iSize; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n"; 
}
class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(10)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SummAll();
};
int ArrSearch :: Frequency(int iValue)
{
    int iCount = 0 , iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            iCount++;
        }
    }
    return iCount;
}
int ArrSearch :: SearchFirst(int iValue)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt+1;
    }
}
int ArrSearch :: SearchLast(int iValue)
{
    int iCnt = 0;

    for(iCnt = iSize; iCnt > 0; iCnt--)
    {
        if(Arr[iCnt] == iValue)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt+1;
    }
}
int ArrSearch :: EvenCount()
{
    int iCnt = 0, iEven = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
    }
    return iEven;
}
int ArrSearch :: OddCount()
{
    int iCnt = 0, iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iOdd++;
        }
    }
    return iOdd;
}
int ArrSearch :: SummAll()
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iRet = 0;
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    iRet = sobj1.Frequency(11);
    cout<<"Frequency is : "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);
    cout<<"First Occurence is : "<<iRet<<"\n";

    iRet = sobj1.SearchLast(11);
    cout<<"Last Occurence is : "<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"Even Count of elements is : "<<iRet<<"\n";

    iRet = sobj1.OddCount();
    cout<<"Odd Count of elements is : "<<iRet<<"\n";

    iRet = sobj1.SummAll();
    cout<<"Sum of all elements is : "<<iRet<<"\n";
}