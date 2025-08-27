//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and a charcacter from the user and return the last occurence of the character
 /*
    Input : Marvellous Multi OS
            M
    Output : 11
 */

 #include<stdio.h>

 int LastChar(char *str,char ch)
 {
   int iCnt = 0;
   int last = -1;

   for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
   {
      if(str[iCnt] == ch)
      {
         last = iCnt;
      }
   }
   return last;
          
 }

 int main()
 {
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter a character which you want to search : ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    if(iRet != 0)
    {
     printf("Last Occurence of %c is %d\n",cValue , iRet);
    }
    else
    {
      printf("%c is not present in the string\n",cValue);
    }

    return 0;
 }