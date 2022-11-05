/*
Name: Sharan Rathnakumar
Date: 17th October 2022
Description: WAP to print the numbers in X format as shown below
Input: Enter the number: 4
Output:
1  4
 23
 23
1  4

*/

#include<stdio.h>
int main()
{
    int num,i,j;
 //   printf("Enter the number: ");       //Print message for user
    scanf("%d",&num);                   //Stores in num variable
    for(i=0;i<num;i++)                  //Iterating num times for rows
    {
        for(j=0;j<num;j++)              //Iterating num times coloumns
        {
            if(i==j || i+j == num-1)    //Checking whether num of rows and num of coloumns equals or if num of (row+coloumn) equal to num-1
            {
                printf("%d",j+1);      //Printing j+1th value
            }
            else
            {
                printf(" ");            //Else prints space
            }
        }
        printf("\n");                   //New line
    }
    return 0;
}
