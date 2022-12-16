/*
Name: Sharan Rathnakumar
Date: 14th December 2022
Description: Sum of digits of the given number
Input: Enter the number : 12345
Output: The sum of digits is 15
        The product of digits is 120
*/

#include<stdio.h>
int main()
{
    int num,n,sum=0,product=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        n=num%10;
        sum+=n;
        product*=n;
        num/=10;
    }

    printf("The sum of digits is %d\nThe product of digits is %d\n",sum,product);
}
