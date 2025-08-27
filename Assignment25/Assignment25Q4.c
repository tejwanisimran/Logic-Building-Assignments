//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and display only digits from it
 /*
    Input : Marve89llous121
    Output : 89121
 */

 #include<stdio.h>

 void DisplayDigit(char *str)
 {
   while(*str != 0)
   {
      if((*str >= '0') && (*str <= '9'))
      {
        printf("%c",*str);
      }
    str++;
   }
 }

 int main()
 {
    char arr[20] = {'\0'};

    printf("Enter the string : ");
    scanf("%[^'\n]s",arr);

    DisplayDigit(arr);

    return 0;
 }