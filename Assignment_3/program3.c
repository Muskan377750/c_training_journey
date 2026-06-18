#include <stdio.h>
#include <stdbool.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    bool val = (a%2==0)?true:false;
    printf("if 1 comes means even and if 0 cmes means odd:%d",val);
    return 0;
}