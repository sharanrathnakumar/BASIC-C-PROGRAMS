/*
Name: Sharan Rathnakumar
Date: 12th October 2022
Description: The user entered number should identified whether its a odd or a even number. Mention its sign too.
Input: Integer 'N'
Output:  Enter the value of 'n' : -2
        -2 is negative even number
*/

#include<stdio.h>
int main()
{
    int  value;
    printf("Enter the value of 'n': ");       //print instruction to user
    scanf("%d",&value);                         //take input from user and store it to value
    if(value>0)                                 //checks whether entered number is positive or negative
    {
        if(value%2==0)                          //checks whether positive number is even
        {
            printf("%d is positive even number\n",value);
        }
        else
        {
            printf("%d is positive odd number\n",value);
        }
    }
    else if(value<0)                            //checks whether entered number is negative
    {
        if(value%2==0)                          //checks whether negative number is odd or even
        {

            printf("%d is negative even number\n",value);
        }
        else
        {

            printf("%d is negative odd number\n",value);
        }
    }
    else                                        //if the number is not positive or negative not odd nor even (0)
    {
        printf("%d is neither odd nor even\n",value);
    }

    return 0;
}
