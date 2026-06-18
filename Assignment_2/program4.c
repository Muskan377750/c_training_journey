// With strrev() function

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[100];
//     printf("Enter a string : ");
//     scanf("%s",&str);
//     strrev(str);
//     printf("Reverse of string is %s",str);
//     return 0;
// }

// With Reversing manually
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s",&str);
//     int len = strlen(str);
//     for(int i=0;i<len/2;i++){
//         char temp = str[i];
//         str[i]= str[len-i-1];
//         str[len-i-1] = temp;
//     }

//     printf("Your reversed string is %s",str);
//     return 0;
// }

// Created a reversed copy
#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    int len = strlen(str);
    char rev[len+1];
    for(int i=0;i<len;i++){
        rev[i]=str[len-i-1];
    }
    rev[len] = '\0';
    printf("The reversed string is %s",rev);
    return 0;
}