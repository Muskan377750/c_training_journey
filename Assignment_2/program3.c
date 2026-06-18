#include <stdio.h>
#include <math.h>

int main(){
    float side;
    float area;
    printf("Enter side of an equilateral triangle: ");
    scanf("%f",&side);
    area = (sqrt(3)/4)*side*side;
    printf("Area of the given equilateral triangle is %f sq. units\n",area);
    return 0;
}