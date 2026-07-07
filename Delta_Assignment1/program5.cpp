#include <iostream>
using namespace std;

class student{
private:
int stud_id;
string name;
int sem;
string branch;
public:
void setData(int s, string n, int se, string b){
    stud_id = s;
    name = n;
    sem = se;
    branch = b;
};
void printDetails(){
    cout<<"Student ID : "<<stud_id<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Semester : "<<sem<<endl;
    cout<<"Branch : "<<branch<<endl;
};
};

int main(){
    student s1;
    s1.setData(101,"Muskan",7,"CSE");
    s1.printDetails();
    return 0;
}