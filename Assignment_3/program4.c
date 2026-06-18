#include <stdio.h>
#include <stdbool.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    bool isLeapYear;
    isLeapYear = (year%400==0)?true:(year%100==0)?false:(year%4==0)?true:false;
    if(isLeapYear==true){
        printf("The year is leap year.");
    }else{
        printf("The year is not leap year");
    }
    return 0;
}