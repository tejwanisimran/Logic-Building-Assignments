//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and cpuy the contents of that string into another string.
 /*
    Input : Marvellous Multi OS
    Output : Marvellous Multi OS (in another string).
 */

 #include<stdio.h>

 void StrNCpyX(char *src , char *dest, int iNo)
 {
    if(src == NULL)
    {
        printf("Source string is empty and there is nothing to copy\n");
        return;
    }

    while((*src != '\0') && (iNo != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iNo--;
    }

    *dest = '\0';

 }

 int main()
 {
   char arr[30] = {'\0'};
   char brr[30];
   int iValue = 0;
  
   printf("Enter the string that you want to copy : ");
   scanf("%[^'\n']s",arr);

   printf("Enter the range till where you want to copy : ");
   scanf("%d",&iValue);

   StrNCpyX(arr, brr,iValue);

   printf("%s",brr);
    
   return 0;
 }