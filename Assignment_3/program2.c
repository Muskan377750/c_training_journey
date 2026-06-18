#include <stdio.h>

int main(){
    int a,b,c;
    int maximum;
    printf("Enter three numbers: ");
    scanf("%d,%d,%d",&a,&b,&c);
    maximum = (a>b)?(a>c)?a:c:(b>c)?b:c;
    printf("The maximum number is %d",maximum);
    return 0;
}