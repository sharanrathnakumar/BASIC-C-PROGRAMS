/*
Name: Sharan Rathnakumar
Date: 13th October 2022
Description: Fibbonacci
Input: Enter a number: 8
Output: 0 1 1 2 3 5 8
*/

#include<stdio.h>
int main()
{
    int term1,term2,limit,sum=0;                //Initialising Variables
    printf("Enter a number: ");                 //Instruction for user
    scanf("%d",&limit);                         //Take input from user
    term1=0;                                    //Initialising
    term2=1;                                    //Initialising
    if(limit>=0)                                //Checking whether number is positive
    {
    while(term1<=limit)                         //Iterating while the term value is less than or equal to limit
    {
        printf("%d ",term1);                    //Priting the first term
        sum=term1+term2;                        //Finding sum of first and second term
        term1=term2;                            //Storing second term to first term
        term2=sum;                              //storing sum of term1 and term2 to sum
    }
    printf("\n");                               //New line
    }
    else
    {
        printf("Invalid input\n");              //If limit is negative displays error message
    }
    return 0;
}
