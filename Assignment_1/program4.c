#include <stdio.h>

int main(){
    float radius;
    printf("Enter radius of the sphere: ");
    scanf("%f",&radius);
    float volume = (4.0/3.0)*3.14*radius*radius*radius;

    // printf("Enter radius of the sphere: ");
    // scanf("%f",&radius);
    printf("The volume of the sphere is:%.2f\n",volume);
    return 0;
}