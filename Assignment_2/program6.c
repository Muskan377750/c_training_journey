#include <stdio.h>

int main(){
    int distance;
    float fuel_spent;

    printf("Enter distance in km: ");
    scanf("%d",&distance);

    printf("Enter fuel_spent in litre: ");
    scanf("%f",&fuel_spent);
    
    float average = distance/fuel_spent;

    printf("Total average = %.2f km/lt\n",average);

    return 0;
}