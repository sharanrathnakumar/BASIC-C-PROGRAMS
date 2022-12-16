/*
Name: Sharan Rathnakumar
Date: 14th December 2022
Description: Reverse a number
Input: 1234
Output: 4321
*/

#include<stdio.h>
int main()
{
    int num,rev=0,rem=0;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rev*=10;
        rem=num%10;
        rev+=rem;
        num/=10;
    }
    printf("Reverse is %d\n",rev);

    return 0;
}
