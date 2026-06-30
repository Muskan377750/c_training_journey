#include <stdio.h>

int HCF(int a, int b){
    int rem;
    while(a!=0){
    rem = b%a;
    b=a;
    a=rem;
    }
    return b;
};

int main(){
    printf("%d",HCF(30,20));
    return 0;
}