#include <stdio.h>

int main(){
    int *ptr = (int*) malloc(sizeof(int));
    free(ptr);
    *ptr = 20;
    printf("%d",*ptr);
    return 0;
}