#include <stdio.h>

int main(){
    int number_item1, number_item2;
    float weight_item1, weight_item2;

    printf("Enter weight of item 1: ");
    scanf("%f",&weight_item1);

    printf("Enter number of item 1: ");
    scanf("%d",&number_item1);

    printf("Enter weight of item 2: ");
    scanf("%f",&weight_item2);

    printf("Enter number of item 2: ");
    scanf("%d",&number_item2);

    float cal = (weight_item1*number_item1)+(weight_item2*number_item2);
    float average = cal/(number_item1+number_item2);

    printf("The average is given as %f\n", average);
    return 0;
}