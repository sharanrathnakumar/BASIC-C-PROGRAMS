/*
Name: Sharan Rathnakumar
Date: 8th Decmber 2022
Description: Compare strings
Input:  Sharan
        Sharan
Output: Strings are equal
*/

#include<stdio.h>
void my_strcmp(char * st1, char * st2);
void my_strcmp(char * st1, char * st2)
{
    int i;
    for(i=0;st1[i]!='\0'|| st2[i]!='\0';i++)
    {
        if(st1[i]!=st2[i])
        {
            printf("Strings are not equal\n");
            return;
        }
    }
    printf("Strings are equal\n");
    return;

}
int main()
{
    char str1[50],str2[50];

    printf("Enter string 1: ");
    scanf("%s",str1);

    printf("Enter string 2: ");
    scanf("%s",str2);

    my_strcmp(str1,str2);

    return 0;
}
