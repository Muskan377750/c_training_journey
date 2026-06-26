// #include <stdio.h>

//   void hello(int y){
//     static int x = 10;
//     printf("%d\n",++x+y);
//   }
// int main(){
//     hello(10);
//     hello(10);
//     hello(10);
//     // register int x;
//     // scanf("%d",&x);
//     // printf("%d",x);
//     return 0;
// }

#include <stdio.h>
// #include "z.c"
// #include<string.h>
extern int z;//gcc .\storage_class.c .\z.c  use this command means compile both files

void hello(int y){
    static int x = 10;
    printf("%d\n",++x+y+z);
  }

  int main(){
    hello(10);
    // hello(10);
    // hello(10);
    // int a=10;
    // int b = 22;
    // printf("%d\n%d\n%d",a++ + --b,a,b);
    // printf("%d",8*16/8/2);
    // return 0;
    // char str[30] = "Hello World";
    // int length = strlen(str);
    // printf("%d\n",length);
    // for(int i = 0; str[i] != '\0'; i++){
    //     printf("%c",str[i]);
    // }
    return 0;
  }
