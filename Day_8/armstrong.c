#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int num =n;
    int count = 0;

    while(num!=0){
        num /= 10;
        count++;
    }

    num = n;
    int sum = 0;

    // printf("%d",count);
    while(num!=0){
        int dig = num%10;
        int multiplier = 1;
        for(int i=0; i<count; i++){
            multiplier *= dig;
        } 
        sum += multiplier;
        num /= 10;
    }
    if(sum==n){
        printf("It is an armstrong number");
    }else{
        printf("It is not an armstrong number");
    }
    return 0;
}