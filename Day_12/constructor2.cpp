#include <iostream>
using namespace std;

class Student{
int rollNo;
string name;
public:
Student(int r, string n){
    rollNo = r;
    name = n;
};
Student(){
    rollNo = 0;
    name = " ";
};
void showData(){
    cout<<name<<" "<<rollNo<<endl;
};
};

int main(){
    Student s1(101,"Muskan");
    s1.showData();
    Student s2;
    s2.showData();
    return 0;
}