#include <stdio.h>

int main(){
    int n = 5;
    for(int i =1; i<=n; i++){
        for(int j = 1; j <= 2*n-1; j++){
            if(i==5||j-i==n-1||i+j==n+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}