#include <iostream>
using namespace std;

class Student{
int rollNo;
string name;
public:
Student(int rollNo, string name){
    this->rollNo = rollNo;
    this->name = name;
};  
Student(/*Student *this*/){
    rollNo = 0;
    name = " ";
};
void showData(){
    cout<<name<<" "<<rollNo<<endl;
};
// void showData(Student *this){ // compiler works like this
//     cout<<this->name<<" "<<this->rollNo<<endl;
// };
};

int main(){
    Student s1(101,"Muskan");
    s1.showData();// student::showData(s1) //SRO is used for member function
    // cout<<&s1.showData<<endl;//error
    // Student s2;
    // s2.showData();
    return 0;
}