//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and a charcacter from the user and return the first occurence of the character
 /*
    Input : Marvellous
    Output : 0
 */

 #include<stdio.h>

 int CountChar(char *str,char ch)
 {
    int iCnt = 0;

      for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
      {
         if(str[iCnt] == ch)
        {
            return iCnt;
            break;
        }
      } 

      if(str == '\0')
      {
         printf("Character not found");
         return -1;
      }
          
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

    iRet = CountChar(arr,cValue);

    
     printf("Character location of %c is %d\n",cValue,iRet);

    return 0;
 }