#include <stdio.h>
#define LL long long

int main(){
    LL n;
    printf("Enter a binary number: ");
    scanf("%lld",&n);
    LL multiplier = 1;
    LL result = 0;
    LL num = n;
    while(num!=0){
        LL unit = num%10;
        num = num/10;
        result += unit * multiplier;
        multiplier *= 2;
    }
    printf("%d",result);
    return 0;
}