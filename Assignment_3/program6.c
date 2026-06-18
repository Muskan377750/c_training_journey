#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d,%d",&a,&b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("The swapped numbers are a = %d, b = %d",a,b);
    return 0;
}