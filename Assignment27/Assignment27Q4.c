//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and copy only the small letters from the string into another string.
 /*
    Input : Marvellous Multi OS
    Output : Marvellous Multi OS (in another string).
 */

 #include<stdio.h>

 void StrCpySmall(char *src , char *dest)
 {
    if(src == NULL)
    {
        printf("Source string is empty and there is nothing to copy\n");
        return;
    }

    while(*src != '\0') 
    {
      if((*src >= 'a') && (*src <= 'z'))
      {
        *dest = *src;
        dest++;
      }
      src++;
    }

    *dest = '\0';

 }

 int main()
 {
   char arr[30] = {'\0'};
   char brr[30];
  
   printf("Enter the string that you want to copy : ");
   scanf("%[^'\n']s",arr);

   StrCpySmall(arr, brr);

   printf("%s",brr);
    
   return 0;
 }