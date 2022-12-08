/*
Name: Sharan Rathnakumar
Date: 17th October 2022
Description: WAP to generate AP, GP, HP series
Input:  Enter the First Number 'A': 2
        Enter the Common Difference / Ratio 'R': 3
        Enter the number of terms 'N': 5
Output: AP = 2, 5, 8, 11, 14
        GP = 2, 6, 18, 54, 162
        HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include<stdio.h>
int main()
{
    int i,FirstNum,Ap,Gp,ratio,num;                             //Initialising Variables as integer
    float Hp;                                                   //Initialising Hp variable as float
 //   printf("Enter the First Number 'A':");                      //Asks user to enter first number
    scanf("%d",&FirstNum);                                      //Take input from user and store in FirstNum variable
 //   printf("Enter the Common Difference / Ratio 'R':");         //Asks user to enter common difference/ratio
    scanf("%d",&ratio);                                         //Take input from user and store it to ratio variable
 //   printf("Enter the number of terms 'N':");                   //Asks user to enter number of terms
    scanf("%d",&num);
    if(num>0)                                                   //Checks if input num is greater than 0
    {
    Ap=FirstNum;                                                //Store FirstNum value to Ap
    Gp=FirstNum;                                                //Store FirstNum value to Gp
    printf("\nAp = ");
    for(i=0;i<num;i++)                                          //Iterating num times
    {
        printf("%d, ",Ap);                                       //Prints Value of Ap
        Ap+=ratio;                                              //Increments Ap by difference value given by user
    }

    printf("\nGp = ");
    for(i=0;i<num;i++)                                          //Iterating loop num times
    {
        printf("%d, ",Gp);                                       //Prints the Gp in sequence
        Gp*=ratio;                                              //Gp = Gp*ratio
    }

    Ap=FirstNum;                                                //Initialising Ap as First term
    printf("\nHp = ");
    for(i=0;i<num;i++)                                          //Iterating num times
    {
        Hp=(float)1/Ap;                                         //Storing Inverse of Ap term as Hp
        printf("%f, ",Hp);                                       //Printing Hp term in sequence
        Ap+=ratio;                                              //Calculating next Ap term
    }
    printf("\n");
    }
    else
    {
        printf("Invalid input\n");                              //Printing error message
    }

    return 0;
}
