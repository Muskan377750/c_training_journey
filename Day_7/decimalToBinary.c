// #include <stdio.h>

// int main(){
//     int n ;
//     printf("Enter a decimal number: ");
//     scanf("%d",&n);
//     int num = n;
//     int binary = 0;
//     int base = 1;
// while(num!=0){
//     int dig1 = num%2;
//      num = num/2;
//      binary = binary+base*dig1;
//      base = base*10;
// }
// printf("%d",binary);
//     return 0;
// }
#include <stdio.h>

int main(){
    int n ;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int num = n;
    int binary = 0;
    int base = 1;
while(num!=0){
    int dig1 = num&1;//using bitwise operator
     num = num/2;
     binary = binary+base*dig1;
     base = base*10;
}
printf("%d",binary);
    return 0;
}