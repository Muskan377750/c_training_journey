#include <stdio.h>

int main(){
    int number_of_days;

    printf("Enter total number of days: ");
    scanf("%d",&number_of_days);
    int total_years = number_of_days/365;
    int remaining_days = number_of_days%365;
    int total_weeks = remaining_days/7;
    int total_days = remaining_days%7;

    printf("Total years: %d\n",total_years);
    printf("Total weeks: %d\n",total_weeks);
    printf("Total days: %d\n",total_days);
    return 0;
}