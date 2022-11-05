/*
Name: Sharan Rathnakumar
Date: 2nd November 2022
Description: WAP to print all primes using Sieve of Eratosthenes method
Input: Enter the value of 'n' : 20
Output: The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
 */

#include<stdio.h>
int main()
{
    int array[100],limit,i,j,nlimit,n,n1;                       //Initialising variables and arrays
    printf("Enter the value of 'n' : ");
    scanf("%d",&limit);
    if(limit>1)                                         //Checking if entered number is non negative and greater than 1
    {
        for(i=2;i<=limit;i++)                           //Iterating element limit times and storing in array
        {
            array[i-2]= i;
            //  printf("%d ",array[i-2]);
        }

        //New limit value
        n1=1;
        while(n<=limit)
        {
            n=n1*n1;
            n1++;
        }
        for(i=2;i<limit;i++)                            //Iterating for divisor
        {
            for(j=2;j<n;j++)                    //Iterating for array Index
            {
                if(array[i]%j==0 && array[i]!= j)       //Check if number is divisible by divisor
                {
                    array[i]=0;                         //If divisible replace with 0
                }
            }
        }
        printf("The primes less than or equal to %d are : ",limit);
        for(i=0;i<limit;i++)                            //Iterating the array
        {
            if(array[i]!=0)                                     //Check if number is not 0
            {
                printf("%d,",array[i]);                 //If number is not zero print number
            }
        }

    }
    else
    {
        printf("Please enter a positive number which is > 1\n");//If Limit is negative print error
    }
    printf("\n");

    return 0;
}
