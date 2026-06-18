#include <stdio.h>

int main(){
    int a,b;
    int maximum;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    maximum = (a>b)?a:b;
    printf("The maximum number is %d",maximum);
    return 0;
}