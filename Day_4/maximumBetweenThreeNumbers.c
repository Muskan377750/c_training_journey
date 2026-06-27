// #include <stdio.h>

// int main(){
//     int a,b,c;
//     printf("Enter three numbers a,b,c : ");
//     scanf("%d,%d,%d",&a,&b,&c);
//     if(a>b&&a>c){
//         printf("%d is maximum",a);
//     }else if(b>c){
//         printf("%d is maximum",b);
//     }else{
//         printf("%d is maximum",c);
//     }
//     return 0;
// }
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers a,b,c : ");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a>=b){
        if(a>=c){
            printf("%d is maximum",a);
        }else{
            printf("%d is maximum",c);
        }
    }else{
        printf("%d is maximum",b);
    }
    return 0;
}