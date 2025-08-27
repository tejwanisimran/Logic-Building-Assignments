//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept 2 strings from user and concat second string after first string(Implement strcat() function). 
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
      src++;
    }

    while(*dest != '\0')
    {
      *src = *dest;
      dest++;
      src++;
      
    }

    *dest = '\0';

 }

 int main()
 {
   char arr[30] = {'\0'};
   char brr[30] = {'\0'};
  
   printf("Enter the first string  : ");
   scanf("%[^'\n']s",arr);

   printf("Enter the second string  : ");
   scanf(" %[^'\n']s",brr);

   StrCpySmall(arr, brr);

   printf("%s",arr);
    
   return 0;
 }