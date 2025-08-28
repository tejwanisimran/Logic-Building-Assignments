//////////////////////////////////////////////////////////////////////////////////
// Description : Write a application which accepts file name from user and display the size of the file
/*
   Input : Demo.txt
   Output : File create sucessfully
*/

#include<stdio.h>
//#include<unistd.h>
#include<fcntl.h>

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};
   char Buffer[10] = {'\0'};
   int iRet = 0, iSum = 0;

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);

   fd = open(Fname,O_RDONLY);

   if(fd == -1)
   {
      printf("Unable to create the file\n");
   }
   else
   {
      printf("File is sucessfully opened with fd : %d\n",fd);

      while((iRet = read(fd,Buffer,10)) != 0)
      {
         iSum = iSum + iRet;
      }

      printf("Size of file is %d bytes",iSum);

      close(fd);

   }

   return 0;
}
 