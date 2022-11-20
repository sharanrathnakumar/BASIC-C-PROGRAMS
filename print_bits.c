/*
Name: Sharan Rathnakumar
Date: 7th November 2022
Description: WAP to print 'n' bits from LSB of a number
Input:  Enter the number: 10
Enter number of bits: 12
Output: Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
 */

#include <stdio.h>

int print_bits(int, int);               //Function Initialisation

int main()
{
    int num, n;

    printf("Enter num, n :\n");         //User instruction
    scanf("%d%d", &num, &n);            //Read values to num and n
    if(n>32)                            //Checking number of bits is greater than 32bits
    {
        n=32;                           //Assigning Bit value n as 32
        printf("Binary form of %d:", num);
        print_bits(num, n);             //Function call

    }
    else
    {
        printf("Binary form of %d:", num);      //else condition part
        print_bits(num, n);                     //Function call

    }
    return 0;
}

int print_bits(int num, int n)                  //Function definition
{
    int mask=1,i;                               //Local variable Initialisation
    for(i=n;i>0;i--)                            //For loop decrementing operation
    {
        printf("%d ",(num>>i-1)&1);
    }
    printf("\n");
}
