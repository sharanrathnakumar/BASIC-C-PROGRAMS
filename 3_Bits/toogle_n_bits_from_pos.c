/*
Name: Sharan Rathnakumar
Date: 07 November 2022
Description: WAP to toggle 'n' bits from given position of a number
Input:  Enter the number: 10
Enter number of bits: 3
Enter the pos: 5
Output: Result = 50
*/

#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);               //Function Initialisation
int toggle_nbits_from_pos( int num, int n, int pos)     //Function Definition
{
    int mask=1;
    return (num^((mask<<n)-1)<<pos-n+1);                //Toggle condition
}

int main()
{
    int num, n, pos, res = 0;

    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);

    res = toggle_nbits_from_pos(num, n, pos);           //Function call

    printf("Result = %d\n", res);                       //Print result
}
