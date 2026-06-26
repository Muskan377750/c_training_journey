#include <stdio.h>

int main(){
    float a, b;
    printf("Enter two operands: ");
    scanf("%f,%f",&a,&b);
    char op;
    printf("Enter one operator: ");
    scanf(" %c",&op);
    switch(op){
        case '+': printf("The value of a + b is:%f ",a+b);
                  break;
        case '-': printf("The value of a - b is:%f ",a-b);
                  break;
        case '*': printf("The value of a * b is:%f ",a*b);
                  break;
        case '/': if(b!=0){
            printf("The value of a / b is:%f ",a/b);
        }else{
            printf("Division not possible");
        }
           break;
        default: printf("The operator is invalid");
    }
    return 0;
}