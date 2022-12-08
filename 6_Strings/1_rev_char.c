/*
Name: Sharan Rathnakumar
Date: 8th December 2022
Description: Reverse string and print character wise
Input: abc
Output: cba
*/

#include<stdio.h>
int main()
{
    char str[50];
    int i,len=0,index=0;

    printf("Enter your string: ");
    scanf("%s",str);

    while(str[len++] !='\0');
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
