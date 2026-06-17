#include <stdio.h>

int main(){
    int secs;
    printf("Enter total seconds: ");
    scanf("%d",&secs);
    int hours = secs/3600;
    int rem = secs%3600;
    int minutes = rem/60;
    int seconds = rem%60;
    printf("There are: \n");
    printf("H:M:S - %d:%d:%d",hours,minutes,seconds);
    return 0;
}