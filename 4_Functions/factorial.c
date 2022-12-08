/*
Name: Sharan Rathnakumar
Date: 14th November 2022
Description: WAP to find factorial of given number using recursion (main function itself)
Input:Enter the value of N : 7
Output:Factorial of the given number is 5040
*/

#include<stdio.h>
int main()
{
    static int num,flag=1,f=0;
    static unsigned long long int fact = 1;
//Works for only 1 time once the statemnet is executed 1 time flag becomes 0
    if(flag)
    {
    printf("Enter the value of N :");
    scanf("%d",&num);
    flag=0;
    if(num>0)
    {
        main();
    }
    else
    {
        printf("Invalid Input\n");
    }
    }
//Code for factorial
    if(!flag && num>1)
    {
    fact=fact*num;
    num--;
    main();
    }
    else if((num==1 || num ==0) && f!=1)
    {
    printf("Factorial of the given number is %llu\n",fact);
    f=1;
    }

}
