/*
Name: Sharan Rathnakumar
Date: 15th November 2022
Description: Print the values in sorted order without modifying or copying array
Input:  Enter the size : 5
        Enter 5 elements
        10 1 3  8 -1
Output: After sorting: -1 1 3 8 10
        Original array values 10 1 3 8 -1
*/
#include <stdio.h>

void print_sort(int [], int);
void print_sort(int arr[], int size)
{
    int small=arr[0],large=arr[0],i,j;
    //condition to find small and large elements
    for(i=0;i<size;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
        else if(arr[i]>large)
        {
            large=arr[i];
        }

    }
    printf("After Sorting: ");
    printf("%d ", small);
    int temp=large;
    for(i=0;i<size;i++)
    {
        if(small != large)
        {
            for(j=0;j<size;j++)
            {
                //condition to find second  element
                if(small<arr[j] && arr[j]<large)
                {
                    large=arr[j];
                }
            }
            printf("%d ",large);
            small=large;
            large=temp;
        }
    }
    printf("\n");
    printf("Original array values ");
    //condition to print the array
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int size, iter;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements\n");
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }

    print_sort(arr, size);
}
