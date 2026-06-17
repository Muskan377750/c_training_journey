#include <stdio.h>
#include <math.h>

int main(){
    float principle;
    float time;
    float rate;

    printf("Enter principle: ");
    scanf("%f",&principle);

    printf("Enter time: ");
    scanf("%f",&time);

    printf("Enter rate: ");
    scanf("%f",&rate);
    
    float compound_interest = principle*pow((1+rate/100),time);

    printf("Compound Interest = %f",compound_interest);
    return 0;
}