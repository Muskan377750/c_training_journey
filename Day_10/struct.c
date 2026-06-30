#include <stdio.h>

struct student{
        char name[30];
        int rollno;
        char add[50];
        char section;
    };

int main(){
    // struct student s1 = {2305551,"Muskan","Premgarh",'A'};
    // printf("%d %s %s %c\n",s1.rollno,s1.name,s1.add,s1.section);
    // printf("%d",sizeof(s1));//padding problem
    struct student s1[2];
    for(int i=0;i<2;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].rollno);
        scanf("%s",s1[i].add);
        scanf(" %c",&s1[i].section);
    }
    for(int i=0;i<2;i++){
        printf("%s ",s1[i].name);
        printf("%d ",s1[i].rollno);
        printf("%s ",s1[i].add);
        printf("%c\n",s1[i].section);
    }
    return 0;
}