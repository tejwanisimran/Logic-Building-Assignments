///////////////////////////////////////////////////////////////////////////////////////////////////////
// Description : Accept divisions of student from user and depends on the division display exam timing
//               There are 4 divisions in the school as A,B,C,D
//               Exam timing of division A is 7 AM 
//               Exam timing of division B is 8:30 AM 
//               Exam timing of division C is 9:20 AM 
//               Exam timing of division D is 10:30 AM 
//               APPLICATION SHOULD BE CASE SENSITIVE
/*
    Input : C
    Output : Yor exam starts at 9:20 AM

    Input : d
    Output : Yor exam starts at 10:30 AM
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam starts at 7 AM\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam starts at 8:30 AM\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam starts at 9:20 AM\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam starts at 10:30 AM\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}