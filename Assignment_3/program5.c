#include <stdio.h>
#include <stdbool.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf(" %c",&c);
    bool isalphabet = (c>='a'&&c<='z'||c>='A'&&c<='Z')?true:false;
    if(isalphabet){
        printf("It is an alphabet");
    }else{
        printf("It is not an alphabet");
    }
    return 0;
}