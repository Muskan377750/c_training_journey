// #include <stdio.h>

// int main(){
//     // int arr[5] = {3,4,2,5,6};
//     // printf("%d",sizeof(arr));
//     // printf("%p",arr);
//     // printf("%d",*arr);
//     // printf("%p",*arr);
//     // printf("%d",*arr+4);
//     // printf("%d",*(arr+4));
//     char str[5]="hihh";
//     printf("%s",str);
//     return 0;
// }

#include <stdio.h>

void fun(){
    static int x = 10;
    x++;
    printf("%d\n",x);
}

int main(){
    int x = 20;
    fun();
    fun();
    fun();
    printf("%d",x);
    return 0;
}