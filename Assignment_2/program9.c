#include <stdio.h>

int main(){
    float fahrenheit;
    float celsius;

    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (5.0/9.0)*(fahrenheit-32);

    printf("The temperature in celsius will be %f Celsius\n",celsius);
    return 0;
}