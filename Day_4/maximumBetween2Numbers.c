#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Enter number A: ");
    scanf("%d",&a);
    printf("Enter number B: ");
    scanf("%d",&b);
    if(a>b){
        printf("The maximum number is : %d",a);
    }else{
        printf("The maximum number is : %d",b);
    }
    return 0;
}