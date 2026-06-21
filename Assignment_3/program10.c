#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    (number>10&&number<20)?printf("Number lies between 10 and 20."):printf("Number does not lies between 10 and 20.");
    return 0;
}