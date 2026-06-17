#include <stdio.h>

int main(){
    int minutes;
     printf("Enter total minutes: ");
     scanf("%d",&minutes);
     int hour = minutes/60;
     int minute = minutes % 60;
     printf("Total number of hours and minutes:%dhours,%dminutes",hour,minute);
    return 0;
}