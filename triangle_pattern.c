/*
Name: Sharan Rathnakumar
Date: 17th October 2022
Description: WAP to print triangle pattern as shown below
Input: Enter the number: 4
Output: 1 2 3 4
        5   6
        7 8
        9
*/

#include<stdio.h>
int main()
{
    int num,i,j,n=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num;i>=1;--i)         //Decrementing num times
    {
        for(j=1;j<=i;j++)       //Iterating i times
        {
            if(i==num || j ==1 || i ==j) //Checking if i equals num and j equals 1 and i equals j
            {
                n=n+1;                  //Incrementing n value by one
                printf("%d ",n);
            }
            else
            {
                printf(" ");    //Else prints space
            }
        }
        printf("\n");
    }
    return 0;
}
