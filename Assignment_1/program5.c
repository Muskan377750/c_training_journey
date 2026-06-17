#include <stdio.h>

int main(){
    float kilometers;
    // float miles = kilometers*0.621371;
     printf("Enter kilometers per hour: ");
     scanf("%f",&kilometers);
     double miles = kilometers*0.621371;
     printf("Miles per hour: %.6lf M",miles);
    return 0;
}