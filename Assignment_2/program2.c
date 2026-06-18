#include <stdio.h>

int main(){
    float total, average, percentage;
    float s1, s2, s3, s4, s5;

    printf("Enter marks of 5 subjects = ");
    scanf("%f %f %f %f %f",&s1, &s2, &s3, &s4, &s5);

    total = s1+s2+s3+s4+s5;
    average = total/5;
    percentage = (total/500)*100;
    
    printf("Total = %f\n",total);
    printf("Average = %f\n",average);
    printf("Percentage = %f\n",percentage);
    
    return 0;
}