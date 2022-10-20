/*
Name: Sharan Rathnakumar
Date: 13th October 2022
Description: Check for Perfect numbers
Input: Enter a number: 6
Output: Perfect number
*/

#include<stdio.h>
int main()
{
    int num,i,num_half,temp=0;                  //Initialising variables
    printf("Enter a number: ");                 //Print instruction for user
    scanf("%d",&num);                           //Read the user entered value to num variable
    num_half=num/2;                             //Find the half of entered value

    if(num>0)                                   //Check whether entered number is positive or not
    {
        for(i=1;i<=num_half;i++)                //Iterating the loop half the user entered number times
        {
            if(num%i==0)                        //Checking for divisible number
            {
                temp=temp+i;                    //Adding the dividible numbers
            }
        }

        //    printf("Temp: %d",temp);
        if(temp==num)                           //Checking if the sum of divisors is equal to num
        {
            printf("Yes, entered number is perfect number\n"); //Print perfect number
        }
        else
        {
            printf("No, entered number is not a perfect number\n"); //print not perfect number
        }
    }
    else
    {
        printf("Error : Invalid Input, Enter only positive number\n"); //Print error message when number is negative
    }
    return 0;
}
