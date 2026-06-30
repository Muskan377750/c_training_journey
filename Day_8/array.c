#include <stdio.h>

int main(){
    //initialization
    int arr [][3] = {{1,2,4},{1,2,3}};
    // int arr [2][3] = {1,2,4,1,2,3};
    // int arr[2][3] = {[1][0]=1,[1][1]=2,[1][2]=0};
    
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p",*(arr[0]+1));
    return 0;
}