//////////////////////////////////////////////////////////////////////////////////
 // Description : Write a program which accept string from user and a charcacter from the user and check whether the character is present or not
 /*
    Input : Marvellous
    Output : 0
 */

 #include<stdio.h>
 #include<stdbool.h>

 bool ChkChar(char *str,char ch)
 {
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
        }
        else
        {
            bFlag = false;
        }
        str++;
    }
    return bFlag;
 }

 int main()
 {
    char arr[20] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter a character which you want to search : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in the string\n",cValue);
    }
    else
    {
        printf("%c is not present in the string\n",cValue);
    }

    return 0;
 }