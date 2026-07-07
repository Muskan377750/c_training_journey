#include <iostream>
using namespace std;

class Student{
int student_id;
string name;
string branch;
int marks[5];
public:
  Student(int student_id,string name,string branch){
    this->student_id = student_id;
    this->name = name;
    this->branch = branch;
  }; 
  void setMarks(){
    for(int i=0; i<5; i++){
        cin>>marks[i];
    }
  };
  float calcPercentage(){
    int sum = 0;
    for(int i=0; i<5; i++){
        sum+=marks[i];
    }
    float per = sum*100/500;
    cout<<per<<"%"<<endl;
    return per;
  };
  void position(){
    float per = calcPercentage();
    if(per<=100&&per>=95){
        cout<<"District"<<endl;;
    }else if(per>=90&&per<=94){
        cout<<"First class"<<endl;
    }else if(per>=80&&per<90){
        cout<<"Second class"<<endl;
    }else if(per>=50&&per<=79){
        cout<<"Pass"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }
  };
};

int main(){
    Student s1(2305551,"Muskan","CSE");
    cout<<"Enter your marks: ";
    s1.setMarks();
    cout<<"Your percentage: ";
    s1.position();
    return 0;
}