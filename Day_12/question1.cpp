#include <iostream>
using namespace std;

class Employee{
 int id;
 string name;
 int salary;
 string dept;
 public:
 Employee(int i, string n, int s,string d){
    id = i;
    name = n;
    salary = s;
    dept = d;
 };
 void showData(){
    cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl<<"Department: "<<dept<<endl;
 };
};

int main(){
    Employee E1(101,"Muskan",10000000,"CSE");
    E1.showData();
    return 0;
}