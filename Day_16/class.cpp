#include <iostream>
#include <string.h>

class Student{
    //data
    int rollno;
    char name[20];
    char batch;

    //operations
    public:
    void setData(int r, char n[],char b){
        rollno = r;
        strcpy(name,n);
        batch = b;
    }

    void showData(){
        printf("%d %s %c",rollno,name,batch);
    }
};

int main(){
    Student s1;// when an object is created memory is allocated to class members;
    Student s2;
    s1.setData(551,"Muskan",'A');
    s1.showData();
    return 0;
}