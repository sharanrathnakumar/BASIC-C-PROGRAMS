#include <stdio.h>

int main() {
   int sum,num1,num2,product,difference;
   float quotient;

printf("Enter First Number: ");
scanf("%d",&num1);
printf("Enter Second Number: ");
scanf("%d",&num2);
sum=num1+num2;
product=num1*num2;
difference=num1-num2;
quotient=num1/num2;
printf("The sum is :%d\n",sum);
printf("The product is :%d\n",product);
printf("The difference is :%d\n",difference);
printf("The quotient is : %f\n",quotient);

return 0;
}
