#include<stdio.h>
void main() {
int y;
clrscr();
printf("Enter a year\n");
scanf("%d",&y);
if((y%4==0)&&(y%100!=0)||(y%400==0))
{
printf("The year %d is a leap year",y);
}
else {
printf("The year %d is not a leap year");
}
getch();
}