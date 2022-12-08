/*
Name: Sharan Rathnakumar
Date:
Description:
Input:
Output:
 */

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            if(num2>num3)
            {
                printf("%d\n",num2);
            }
            else
            {
                printf("%d\n",num3);
            }
        }
        else
        {
            printf("%d\n",num2);
        }
    }
    else
    {
        if(num2>num3)
        {
            if(num1>num3)
            {
                printf("%d\n",num1);
            }
            else
            {
                printf("%d\n",num3);
            }
        }
        else
        {
            printf("%d\n",num2);
        }
    }

    return 0;
}
