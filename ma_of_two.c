#include <stdio.h>
int main() {
int num1,num2;
printf("Enter two numbers: ");
scanf("%d %d",&num1,&num2);
if(num1>num2){
printf("The max of %d and %d is: %d\n",num1,num2,num1);
}
else
   {
printf("The max of %d and %d is: %d\n",num1,num2,num2);
   }
return 0;
}
