#include <stdio.h>

int main(){
    int n;
    printf("Enter a four digit number: ");
    scanf("%d",&n);
    printf("%d\n",n/1000);
    printf("%d\n",(n/100)%10);
    printf("%d\n",(n/10)%10);
    printf("%d",n%10);
    return 0;
}