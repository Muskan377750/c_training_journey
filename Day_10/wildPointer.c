#include <stdio.h>

int main(){
    int *ptr;
    *ptr = 10;
    printf("%d\n",*ptr);
    printf("%d",ptr);
    return 0;
}