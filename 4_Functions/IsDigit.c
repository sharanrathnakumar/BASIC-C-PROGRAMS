/*
Name: Sharan Rathnakumar
Date: 2nd November 2022
Description: WAP to implement your own isxdigit() function
Input: Enter the character: a
Output: The character 'a' is an hexadecimal digit.
 */

#include<stdio.h>

int my_isxdigit(int);    //Initialising function

int my_isxdigit( int character)  //Function definition
{
    if( character>=97 && character <= 102 || character >= 65 && character <= 70 || character >= 48 && character <= 57)//checking whether character is in ascii range for alnum
    {
        return 1;       //When condition is true returns 1 to the function call
    }
    else
    {
        return 0;       //When condition is false returns 0 to the function call
    }
}

int main()
{
    char ch;    //Initialisng character variable
    int ret;    //Initialisinh ret variable

    printf("Enter the character:");     //Display information for user
    scanf("%c", &ch);                   //Read character to ch variable

    ret = my_isxdigit(ch);
    if(ret)                             //Checks true if ret is 1
    {
        printf("Entered character is an hexadecimal digit\n");       //If alnum prints is alnum message
    }
    else                                //Else if condition is false, ret value is 0
    {
        printf("Entered character is not an hexadecimal digit\n");   //Not alnum message is printed
    }

    return 0;
}
