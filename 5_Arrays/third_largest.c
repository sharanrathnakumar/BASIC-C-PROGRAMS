/*
Name: Sharan Rathnakumar
Date: 14th November 2022
Description: WAP to find 3rd largest element in an array
Input:  Enter the size of the Array : 5
        Enter the elements into the array: 5 1 4 2 8
Output: Third largest element of the array is 4
 */
#include <stdio.h>

int third_largest(int [], int);

int third_largest(int arr[], int size)
{
    //Initialising variables
    int largest,sec_largest,third_largest,i;
    largest=arr[0];
    sec_largest=0;
    third_largest=0;

    //Iterating to find largest number
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    //Iterating to find second largest number
    for(i=0;i<size;i++)
    {
        if(arr[i]>sec_largest && arr[i]<largest)
        {
            sec_largest=arr[i];
        }
    }
    //Iterating to find third largest number
    for(i=0;i<size;i++)
    {
        if(arr[i]>third_largest && arr[i]<sec_largest)
        {
            third_largest=arr[i];
        }
    }

    return third_largest;
}

int main()
{
    int size, ret,i;

    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);

    int arr[size];

    //Read elements into the array
    printf("Enter the elements into the array :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    //funtion call
    ret = third_largest(arr, size);

    printf("Third largest element of the array is %d\n", ret);
}
