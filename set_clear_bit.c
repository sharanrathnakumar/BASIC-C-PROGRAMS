/*
Name: Sharan Rathnakumar
Date: 20th October 2022
Description: WAP to check N th bit is set or not, If yes, clear the M th bit
Input:  Enter the number: 19
        Enter 'N': 1
        Enter 'M': 4
Output: Updated value of num is 3
*/

#include<stdio.h>
int main()
{
    //Initialising variables and printing user informations and taking input from user
    int number,nthPosition,mthPosition,mask;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("Enter 'N' : ");
    scanf("%d",&nthPosition);
    printf("Enter 'M' : ");
    scanf("%d",&mthPosition);

//  Bit Updation part

    mask=1<<nthPosition;                        //Initialsing mask variable as decimal value after nth left shift
    if(number & mask)                           //Checking if nth Bit is set
    {
        mask=1<<mthPosition;                    //If nth Bit is set assigning mask value as decimal value after mth left shift of 1
        number=number & ~ mask;                 //Updating number after clearing mth Bit
        printf("Updated value of num is %d\n",number);  //Print the updated value
    }
    else
    {
        printf("Updated value of num is : %d\n",number); //nth Bit is not set hence prints the original value
    }

    return 0;
}
