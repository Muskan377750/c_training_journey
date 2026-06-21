#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
   (n>0)?printf("Positive"):(n<0)?printf("Negative"):printf("Zero");
    return 0;
}