/*
Name: Sharan Rathnakumar
Date: 8th December 2022
Description: Print number of words in a string
Input: Abcd efg hijk
Output: The word count is 3
*/

#include<stdio.h>
int main()
{
    char str[50],ch;
    int len=0,i,word=1;

    printf("Enter string: ");
    scanf("%[^\n]",str);
    while(str[len++]!='\0');
    for(i=0;i<len;i++)
    {
        if(str[i] == ' ' && ch != ' ')
        {
            word++;
            ch=str[i];
        }
        else
        {
            ch=str[i];
        }
    }
    printf("The word count is %d\n",word);

}
