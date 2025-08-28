//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a application which accepts file name from user and create that file 
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

   printf("Enter the file name : ");
   scanf("%s",Fname);

   fd = creat(Fname,0777);

   if(fd == -1)
   {
      printf("Unable to create the file\n");
   }
   else
   {
      printf("File is created sucessfully\n");
   }

   return 0;
}
 