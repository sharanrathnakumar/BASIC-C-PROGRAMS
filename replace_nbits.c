/*
Name: Sharan Rathnakumar
Date: 07th November 2022
Description: WAP to replace 'n' bits of a given number
Input:  Enter the number: 10
        Enter number of bits: 3
        Enter the value: 12
Output: Result = 12
*/

#include <stdio.h>

int replace_nbits(int, int, int);               //Function Intialising
int replace_nbits(int num, int n, int val)      //Function definiton
{
    int mask=1;
    return ((val&((mask<<n)-1)) | (num&~((mask<<n)-1)));        //Bitwise operations
}

int main()
{
    int num, n, val, res = 0;

    printf("Enter num, n and val:");                            //Display user messages
    scanf("%d%d%d", &num, &n, &val);                            //Read values to num,n,val

    res = replace_nbits(num, n, val);                           //Function call

    printf("Result = %d\n", res);                               //Print res
    return 0;
}
