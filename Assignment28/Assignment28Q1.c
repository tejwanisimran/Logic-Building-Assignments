//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a application which accepts file name from user and open that file name in read mode
 /*
    Input : Demo.txt
    Output : File opened sucessfully
 */

#include<stdio.h>
//#include<unistd.h>
#include<fcntl.h>

int main()
{
   int fd = 0;
   char Fname[20] = {'\0'};

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);

   fd = open(Fname, O_RDONLY);

   if(fd == -1)
   {
      printf("Unable to open the file\n");
   }
   else
   {
      printf("File is opened sucessfully\n");
   }

   close(fd);

   return 0;
}
 