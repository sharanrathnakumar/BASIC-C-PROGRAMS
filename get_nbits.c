/*
Name: Sharan Rathnakumar
Date: 3rd November 2022
Description: WAP to get 'n' bits of a given number
Input:  Enter the number: 10
        Enter number of bits: 3
Output: Result = 2
*/

#include <stdio.h>

int get_nbits(int, int);                //Functin declaration
int get_nbits( int num , int n)         //Function definition
{
    int mask=1;                         //Declaring mask variable as 1
    //Left shifting mask variable n times and Bit wise and with mask to clear other bits Returning num value
    return num & (mask<<n)-1; 
}

int main()
{
    int num, n, res = 0;                //Main function variable declaration

    printf("Enter num and n:");         //User information declaration
    scanf("%d%d", &num, &n);            //Read values to num and n

    res = get_nbits(num, n);            //Function calling

    printf("Result = %d\n", res);       //Printing result
}