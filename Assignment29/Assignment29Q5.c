//////////////////////////////////////////////////////////////////////////////////
// Description : Write a program which accepts file name and one count from the user and read that number of characters from that file from strating position.

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

void DisplayN(char FName[], int iSize)
{
   int fd = 0, iRet = 0 , iCnt = 0 , iCount = 0;
   char Buffer[50] = {'\0'};

   fd = open(FName , O_RDONLY);

   iRet = read(fd,Buffer,iSize);

   while((iRet != 0))
   {
      for(iCnt = 0; iCnt < iRet ; iCnt++)
      {
        printf("%c\t",Buffer[iCnt]);
      }
      memset(Buffer,'\0',iSize);
      iRet = 0;
   }

}

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};
   int iRet = 0;
   int iLength = 0;

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);

   printf("Enter number of bytes that you want to read : ");
   scanf("%d",&iLength);

   DisplayN(Fname, iLength);
   
   
   return 0;
}
 