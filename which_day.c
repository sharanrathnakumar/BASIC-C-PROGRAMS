/*
Name: Sharan Rathnakumar
Date: 18th October 2022
Description: WAP to find which day of the year
Input: Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
Output: The day is Tuesday
 */

#include<stdio.h>
int main()
{
    int choice,firstDate,lastDate,day;
    printf("Enter the value of 'n' : ");
    scanf("%d",&lastDate);
    if(lastDate>0 && lastDate<=365)
    {
        printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day : ");
        scanf("%d",&choice);
        if(choice>0 && choice<8)
        {
            while(lastDate>0)
            {
                day=lastDate;
                lastDate-=7;
            }

 //           day=lastDate%7;
            day=day+choice-1;
            if(day>7)
            {
                day-=7;
            }
            switch (day) {
                case 1:
                    printf("The day is Sunday\n");
                    break;
                case 2:
                    printf("The day is Monday\n");
                    break;
                case 3:
                    printf("The day is Tuesday\n");
                    break;
                case 4:
                    printf("The day is Wednesday\n");
                    break;
                case 5:
                    printf("The day is Thursday\n");
                    break;
                case 6:
                    printf("The day is Friday\n");
                    break;
                case 7:
                    printf("The day is Saturday\n");
                    break;
                default:
                    printf("Error: day = %d",day);
                    break;
            }
        }
        else
        {
            printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        }
    }
    else
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }
    return 0;
}
