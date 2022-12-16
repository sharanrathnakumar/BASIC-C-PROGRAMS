/*
Name: Sharan Rathnakumar
Date: 14th December 2022
Description: Find the power of number
Input: Enter number: 2
       Enter power: 3
Output: The power of 2 raise to 3 is 8
*/

#include<stdio.h>
int powerFun(int,int);
int main()
{
    int num,power,val;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter power: ");
    scanf("%d",&power);
    val=powerFun(num,power);
    printf("The power of %d raise to %d is %d\n",num,power,val);
}

int powerFun(int num,int pow)
{
    if(pow ==1)
        return num;
    else
        return num*powerFun(num,pow-1);
}
