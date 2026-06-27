#include <stdio.h>

int main(){
    for(int i=2;i<=20;i+=2){
        printf("%d\n",i);
    }
    return 0;
}

#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    for(int i = 0; i<=10; i++){
        printf("%d\n",a);
        int c = a+b;
        a = b;
        b  = c;
    }
    return 0;
}

#include <stdio.h>

int main(){
    int i = 0;
    int a = 0;
    int b = 1;
    loop:
    if(i<=10){
        printf("%d\n",a);
        int c = a+b;
             a = b;
             b = c;
        i++;
    }
    goto loop;
    return 0;
}

#include <stdio.h>

int main(){
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            for(int k=0; k<10; k++){
                goto end;
            }
        }
    }
    end:
    printf("%d\n",1+2);
    return 0;
}

#include <stdio.h>

int main(){
    for(int i =1;i<10;i++){
        printf("\n");
        for(int j=1;j<10;j++){
            printf("Hello");
        }
    }
    return 0;
}







