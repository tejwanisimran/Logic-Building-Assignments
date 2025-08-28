//////////////////////////////////////////////////////////////////////////////////
// Description : Write a program which accepts file name and one character from the user and count the occurences of that character from that file.

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int CountChar(char FName[], char ch)
{
   int fd = 0, iRet = 0 , iCnt = 0 , iCount = 0;
   char Buffer[50] = {'\0'};

   fd = open(FName , O_RDONLY);

   while((iRet = read(fd,Buffer,10)) != 0)
   {
      for(iCnt = 0; iCnt < iRet ; iCnt++)
      {
         if(Buffer[iCnt] == ch)
         {
            iCount++;
         }
      }
   }
   return iCount;

}

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};
   int iRet = 0;
   char cValue = '\0';

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);

   printf("Enter the character of which you want to search the occurences : ");
   scanf(" %c",&cValue);

   iRet = CountChar(Fname, cValue);
   
   printf("Number of occurences of %c in the file is : %d\n",cValue, iRet);
   
   return 0;
}
 