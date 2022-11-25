/*
Name: Sharan Rathnakumar
Date: 14th November 2022
Description: WAP to remove duplicate elements in a given array
Input:  Enter the size: 5
        Enter elements into the array: 5 1 3 1 5
Output: After removing duplicates: 5 1 3
*/

#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size); //Function declaration
void fun(int arr1[], int size, int arr2[], int *new_size)  //Function definition
{
    int i,j,flag=0,size2=0;             //variable Initialisation
    arr2[0]=arr1[0];                    //Storing first value of arr1 to arr2
    for(i=1;i<size;i++)                 //Iteration of array
    {
        for(j=0;j<i;j++)                //Iterating inner loop
        {
            if(arr1[i]==arr1[j])        //Checking whether elements are same
            {
                flag=1;                 //Setting flag as 1
            }
        }

        if(flag==0)                     //Checking if flag is 0
        {
            size2++;                    //Incrementing size
            arr2[size2]=arr1[i];        //Assigning values to arr2[]
        }

        flag=0;
    }
    *new_size=size2;
}

int main()
{
    //Initialisation, printing user information, reading array and printing array
    int size,new_size,i;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    printf("Enter elements into the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }

    fun(arr1,size,arr2,&new_size);      //Function call

    printf("After removing duplicates: ");
    for(i=0;i<=new_size;i++)                    //Printing arr2[] upto new_size
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");

    return 0;

}
