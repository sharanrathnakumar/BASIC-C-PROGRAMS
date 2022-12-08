/*
Name: Sharan Rathnakumar
Date: 10th November 2022
Description: WAP to find 2nd largest element in an array
Input:  Enter the size of the Array : 5
        Enter the elements into the array: 5 1 4 2 8
Output: Second largest element of the array is 5
*/

#include <stdio.h>

int sec_largest(int [], int);
int sec_largest(int *arr, int size)
{
    int largest,sec_largest,i;
    largest=*arr;                       //Assigning largest as first element of array
    sec_largest=0;                      //Assigning sec_largest as first element of array

    for(i=0;i<size-1;i++)               //Iterating size times
    {
        if(*(arr+i)>largest)            //If first element is greater than largest swap it
        {
            largest=*(arr+i);
            if(*(arr+i) > sec_largest)  //If first element is greater than second largest swap the values
            {
                sec_largest=*(arr+i);
            }
        }
        else
        {
            if(*(arr+i)>sec_largest && *(arr+i) !=largest)
            {
            sec_largest=*(arr+i);
            }
        }
    }
    return sec_largest;                 //Return the values
}

int main()
{
    int size, ret,i;

    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);

    int arr[size];

    //Read elements into the array
    printf("Enter the elements into the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //funtion call
    ret = sec_largest(arr, size);

    printf("Second largest element of the array is %d\n", ret);
}
