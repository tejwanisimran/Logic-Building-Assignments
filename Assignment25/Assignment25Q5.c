//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and count number of whitespaces from it
 /*
    Input : Marvellous
    Output : 0
 */

 #include<stdio.h>

 int DisplayDigit(char *str)
 {
  int iCount = 0;

   while(*str != 0)
   {
      if((*str == ' '))
      {
        iCount++;
      }
    str++;
   }
   return iCount;
 }

 int main()
 {
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n]s",arr);

    iRet = DisplayDigit(arr);

    printf("Number of whitespaces are : %d",iRet);

    return 0;
 }