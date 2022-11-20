/*
Name: Sharan Rathnakumar
Date: 9th November 2022
Description: WAP to implement Circular left shift
Input:Enter num: 12
Enter n : 3
Output: Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include <stdio.h>

int circular_right(int num, int n)

{

    unsigned int utemp1 = (unsigned int)(num&((((1<<n)-1))<<(32-n)));
    int temp1 =(num&((((1<<n)-1))<<(32-n)));

    int temp2 = num << n;

    return num > 0 ? (temp1>>(32-n)) | temp2 :  (utemp1>>(32-n)) | temp2;

}

int print_bits(int ret)
{
    printf("\nResult in Binary: ");
    int i=0;
    while(i<32)
    {
        int bit = ret & (0x80000000>>i);
        bit ? printf("1 "):printf("0 ");
        i++;
    }
}

int main()
{
    int num, n, ret;

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    //print_bits(num);
    //printf("\n");
    ret = circular_right(num, n);

    print_bits(ret);
}
