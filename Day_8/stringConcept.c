// #include <stdio.h>

// int main(){
//     char s[] = {'a','b',3};
//     printf("%u",sizeof(s[1]));
//     char str[]="Hello";
//     str[1] = 'y';
//     printf("%s",str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main(){
    // char str[20] = "Hello";
    // printf("%d\n",strlen(str));//strlen()
    // printf("%d",sizeof(str));
    // char s1[10] = "Helooooo";
    // char s2[6] = "helpp";
    // printf("%s",strcpy(s1,s2));//strcpy()
    // char s1[10] = "Helooooo";
    // char s2[10] = "helpp";
    // printf("%s",strcpy(s1,s2));
    // char s1[10] = "Hello";
    // char s2[6] = "Hellp";
    // printf("%s",strcat(s2,s1));//strcat
     char s1[10] = "Hello";
    char s2[6] = "Hellp";
    printf("%s\n",strupr(s2));
    printf("%s",strlwr(s1));
    return 0;
}