#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    
    printf("Enter a, b, c: ");
    scanf("%d,%d,%d",&a,&b,&c);

    float discriminant = (b*b)-4*a*c;
    float root1 = (-b + sqrt((b*b)-4*a*c)) / (2*a);
    float root2 = (-b - sqrt((b*b)-4*a*c)) / (2*a);

    if(discriminant>0){
        printf("Root1: %f\n",root1);
        printf("Root2: %f\n",root2);
    }else if(discriminant=0){
        printf("Both roots are equal: %f",root1);
    }else{
        printf("No roots");
    }

    return 0;
}