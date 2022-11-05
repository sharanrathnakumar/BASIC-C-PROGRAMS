/*
Name: Sharan Rathnakumar
Date: 27th October 2022
Description: WAP to find the median of two unsorted arrays
Input:  Enter the 'n' value for Array A: 5
        Enter the 'n' value for Array B: 5

        Enter the elements one by one for Array A: 3 2 8 5 4
        Enter the elements one by one for Array B: 12 3 7 8 5
Output: Median of array1 : 4
        Median of array2 : 7
        Median of both arrays : 5.5
*/

#include<stdio.h>
int main()
{
    //Initialising Variables and printing user messages

    int lenA,lenB,i,j,swap,arrayA[50],arrayB[50];
    float medianA,medianB,median;
    printf("Enter the 'n' value for Array A:");
    scanf("%d",&lenA);
    printf("Enter the 'n' value for Array B:");
    scanf("%d",&lenB);

    //Reading numbers to Array
    printf("Enter the elements one by one for Array A:");
    for(i=0;i<lenA;i++)
    {
        scanf("%d",&arrayA[i]);
    }
    printf("Enter the elements one by one for Array B:");
    for(i=0;i<lenB;i++)
    {
        scanf("%d",&arrayB[i]);
    }
    //Buble sorting
    for(i=0;i<lenA-1;i++)
    {
        for(j=0;j<lenA-i-1;j++)
        {
            if(arrayA[j]>arrayA[j+1])
            {
                swap=arrayA[j];
                arrayA[j]=arrayA[j+1];
                arrayA[j+1]=swap;
            }
        }
    }

    for(i=0;i<lenB-1;i++)
    {
        for(j=0;j<lenB-1-i;j++)
        {
            if(arrayB[j]>arrayB[j+1])
            {
                swap=arrayB[j];
                arrayB[j]=arrayB[j+1];
                arrayB[j+1]=swap;
            }
        }
    }
//Display Result
    if((lenA%2)==0)
    {
        medianA=arrayA[lenA/2]+arrayA[lenA/2-1];
        medianA/=2;
        printf("Median of array1 : %g\n",medianA);
    }
    else
    {
        medianA=arrayA[lenA/2];
        printf("Median of array1 : %g\n",medianA);
    }

    if((lenB%2)==0)
    {
        medianB=arrayB[lenB/2]+arrayB[lenB/2-1];
        medianB/=2;
        printf("Median of array2 : %g\n",medianB);
    }
    else
    {
        medianB=arrayB[lenB/2];
        printf("Median of array2 : %g\n",medianB);
    }
    median=(medianA+medianB)/2;
    printf("Median of both arrays : %g\n",median);
    return 0;
}
