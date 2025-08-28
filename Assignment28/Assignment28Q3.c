//////////////////////////////////////////////////////////////////////////////////
// Description : Write a application which accepts file name from user and and read data from the file and display the contents that you have read
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
   int iRet = 0;

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
         write(1,Buffer,iRet);
      }

      close(fd);

   }

   return 0;
}
 