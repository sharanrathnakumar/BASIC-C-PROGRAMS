/*
Name: Sharan Rathnakumar
Date: 10th October 2022
Description: Largest of three
Input: 1 2 3
Output: 3
*/
#include<stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("The Largest is : %d\n",num1);
        }
        else
        {
            printf("The largest is : %d\n",num3);
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("The largest is : %d\n",num2);
        }
        else
        {
            printf("The largest is : %d\n",num3);
        }
    }
    return 0;
}
