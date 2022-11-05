/*
Name: Sharan Rathnakumar
Date: 20th October 2022
Description: WAP to count number of set bits in a given number and print parity
Input:
Output:
*/

#include<stdio.h>
int main()
{
    int num,counter;                    //Initialising variables
    printf("Enter the number: ");       //Instruction to user
    scanf("%d",&num);                   //Take input from user to num
    for(counter=0;num!=0;num>>=1)       //Iterating untill num is not zero
    {
        if(num & 1)                     //Checking last bit is set
        {
            counter++;                  //If last bit is set increment counter value
        }
    }
    printf("Number of set bits = %d\n",counter); //Print the counter value
    if(counter & 1)                              //Check whether counter is odd or even
    {
        printf("Bit parity is Odd\n");           //Print odd parity
    }
    else
    {
        printf("Bit parity is Even\n");          //Print Even parity
    }
}
