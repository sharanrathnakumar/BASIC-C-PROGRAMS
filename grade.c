#include<stdio.h>
int main() {
    int mark;
    printf("Enter your mark: ");
    scanf("%d",&mark);
    if(mark>91)
        printf("A Grade\n");
    else if(mark>81)
        printf("B Grade\n");
    else if(mark>71)
        printf("C Grade\n");
    else if(mark>61)
        printf("D Grade\n");
    else
        printf("Fail\n");
    return 0;
}
