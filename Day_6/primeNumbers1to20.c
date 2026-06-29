#include <stdio.h>
#include <stdbool.h>

int main(){
    int n = 2;
    bool isPrime = true;
    int counter = 0;

    while(counter < 20) {
        for(int i = 2; i <= n/2; i++){
            if(n%i==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            printf("%d ",n);
            counter++;
        }
        n++;
        isPrime = true;
    }
    return 0;
}