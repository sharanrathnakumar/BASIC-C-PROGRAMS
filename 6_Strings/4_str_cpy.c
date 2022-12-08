/*
Name: Sharan Rathnakumar
Date: 8th December 2022
Description: Copy a string without inbuilt functions
Input: String
Output: The Copied Value is : String
*/

#include<stdio.h>
void my_strcp( char *, char *);
void my_strcp( char *st1, char *st2)
{
    int i;
    for(i=0;st1[i]!='\0';i++)
    {
        st2[i]=st1[i];
    }
    st2[i]='\0';
}
int main()
{
    char str1[50],str2[50];
    printf("Enter a string: ");
    scanf("%s",str1);
    my_strcp(str1,str2);
    printf("The Copied Value is : %s\n",str2);
    return 0;
}
