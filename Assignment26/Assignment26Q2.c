//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and a charcacter from the user and return the frequncy of character
 /*
    Input : Marvellous
    Output : 0
 */

 #include<stdio.h>

 int CountChar(char *str,char ch)
 {
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter a character which you want to search : ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Frequency of %c is %d\n",cValue,iRet);

    return 0;
 }