/*
Name: Sharan Rathnakumar
Date: 4th November 2022
Description: WAP to get 'n' bits from given position of a number
Input:  Enter the number: 12
Enter number of bits: 3
Enter the pos: 4
Output: Result = 3
 */

#include <stdio.h>

int get_nbits_from_pos(int, int, int); //function call
int get_nbits_from_pos(int num, int n, int pos) //function definition
{
    int mask=1;
    return (num&(((mask<<n)-1)<<pos-n+1))>>(pos-n+1); //Finding mask left shifting pos times doing and operation and right shifting pos times
   // num=num &mask;
    //num=num>>(pos-n+1);
    //return num;
}
int main()
{
    int num, n, pos, res = 0;

    printf("Enter num, n and val:");    //User message
    scanf("%d%d%d", &num, &n, &pos);    //Read input to num, n , pos

    res = get_nbits_from_pos(num, n, pos);      //function call

    printf("Result = %d\n", res);       //Display result
}
