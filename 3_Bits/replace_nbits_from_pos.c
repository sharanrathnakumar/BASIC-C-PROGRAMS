/*
Name: Sharan Rathnakumar
Date: 7th November 2022
Description: WAP to put the (b-a+1) lsb’s of num into val[b:a]
Input:  Enter the value of 'num' : 11
        Enter the value of 'a' : 3
        Enter the value of 'b' : 5
        Enter the value of 'val': 174
Output: Result : 158
 */

#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);                 //Function Initialisation

int main()
{
    int num, a, b, val, res = 0;                                //Local variables Initialisation

    printf("Enter num, a, b, and val:");                        //User messages
    scanf("%d%d%d%d", &num, &a, &b, &val);                      //Read values to num,a,b,val

    res = replace_nbits_from_pos(num, a, b, val);               //Function call

    printf("Result = %d\n", res);                               //Print result
}

int replace_nbits_from_pos(int num, int a, int b, int val)      //Function definition
{
    int mask=1;
    return(((num&((mask<<((b-a)+1))-1))<<((b-a)+1)) | (val&(~(((mask<<((b-a)+1))-1)<<((b-a)+1))))); //Condition for replacing n bits
}
