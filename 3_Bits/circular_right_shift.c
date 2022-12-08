/*
Name: Sharan Rathnakumar
Date: 9th November 2022
Description: WAP to implement Circular right shift
Input:Enter num: 12
Enter n : 3
Output: Result : 10000000 00000000 00000000 00000001
*/

#include<stdio.h>
int circular_right(int,int);                              
int print_bits(int);

int main()
{
    int num,n,ret=0;                                    

    printf("Enter the num:");                          
    scanf("%d",&num);

    printf("Enter n:");                                
    scanf("%d",&n);

    ret=circular_right(num,n);                          
    print_bits(ret);                                   
}
int circular_right(int num,int n)                       
{
 return (unsigned) num >> n | (unsigned) num << (32-n); 
}
int print_bits(int ret)
{
    int i;                                             
    printf("\nResult in Binary:");                       
    for(int i=31; i>=0; i--)                           
    {
        if(ret&(1<<i))                                
            printf("1 ");                            
        else
            printf("0 ");                             
    }
    printf("\n");                                    
}
