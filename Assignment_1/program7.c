#include <stdio.h>

int main(){
    float first_angle;
    float second_angle;

    printf("Enter first and second angle of triangle: ");
    scanf("%f,%f",&first_angle,&second_angle);
    float third_angle = 180 - (first_angle+second_angle);
    printf("Third angle of triangle =%f",third_angle);
    return 0;
}