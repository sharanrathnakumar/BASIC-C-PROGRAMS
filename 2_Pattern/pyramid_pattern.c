/*
Name: Sharan Rathnakumar
Date: 19th October 2022
Description: WAP to print pyramid pattern as shown below
Input: Enter the number: 4
Output: 4
        3 4
        2 3 4
        1 2 3 4
        2 3 4
        3 4
        4
*/

#include<stdio.h>
int main()
{
    int number,i,j;                             //Initialise variables
    printf("Enter the number: ");               //Print message to enter number
    scanf("%d",&number);                        //Take input from user and store it to number
    for(i=number;i>1;i--)                       //Iterating to display rows in upper triangle
    {
        for(j=i;j<=number;j++)                  //Iterating to display coloums
        {
            printf("%d ",j);                    //Print the j
        }
        printf("\n");                           //New line
    }
    for(i=1;i<=number;i++)                      //Iterating rows for bottom inverted triangle
    {
        for(j=i;j<=number;j++)                  //Iterating coloums for bottom inverted triangle
        {
            printf("%d ",j);                    //Print j
        }
        printf("\n");                           //New line
    }
    return 0;
}
