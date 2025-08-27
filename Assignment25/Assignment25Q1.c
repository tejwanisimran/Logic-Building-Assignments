//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and convert it into lower case
 /*
    Input : Marvellous Multi OS
    Output : marvellous multi os
 */

 #include<stdio.h>

 void strlwrX(char *str)
 {
   while(*str != 0)
   {
      if((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + 32;
    }
    str++;
   }
 }

 int main()
 {
    char arr[20] = {'\0'};

    printf("Enter the string : ");
    scanf("%[^'\n]s",arr);

    strlwrX(arr);

    printf("Modified string is : %s",arr);

    return 0;
 }