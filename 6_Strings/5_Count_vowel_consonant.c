/*
Name: Sharan Rathnakumar
Date: 8th December 2022
Description: Count total number of vowels and constatnts in a given string
Input:
Output:
*/

#include<stdio.h>

void cv_count(char *,int *,int *);
void cv_count(char *str,int *cc,int *vw)
{
    int i,vwC=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] == 'a'|| str[i]== 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A'|| str[i]== 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vwC++;
        }
    }

    *cc=i-vwC;
    *vw=vwC;
}

int main()
{
    char str[50];
    int const_count=0,vowel_count=0;
    printf("Enter strings: ");
    scanf("%s",str);
    cv_count(str,&const_count,&vowel_count);
    printf("Constant count: %d\nVowel Count: %d\n",const_count,vowel_count);
    return 0;
}
