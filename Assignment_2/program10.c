#include <stdio.h>

int main(){
    float principle,time,rate;
    float SI;

    printf("Enter principle: ");
    scanf("%f",&principle);

    printf("Enter time: ");
    scanf("%f",&time);

    printf("Enter rate: ");
    scanf("%f",&rate);

    SI = (principle*rate*time)/100.0;

    printf("Simple interest: %f\n",SI);
    return 0;
}