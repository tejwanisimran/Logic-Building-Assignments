//////////////////////////////////////////////////////////////////////////////////
// Description : Write a program which accepts file name from the user and count number of whitspaces from that file

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int CountWhite(char FName[])
{
   int fd = 0, iRet = 0 , iCnt = 0 , iWhite = 0;
   char Buffer[50] = {'\0'};

   fd = open(FName , O_RDONLY);

   while((iRet = read(fd,Buffer,10)) != 0)
   {
      for(iCnt = 0; iCnt < iRet ; iCnt++)
      {
         if(Buffer[iCnt] == ' ')
         {
            iWhite++;
         }

      }
   }
   return iWhite;

}

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};
   int iRet = 0;

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);

   iRet = CountWhite(Fname);
   
   printf("Number of White spaces in the file are : %d\n",iRet);
   
   return 0;
}
 