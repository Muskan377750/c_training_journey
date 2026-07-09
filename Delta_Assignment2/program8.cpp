#include <iostream>
using namespace std;

class Employee{
int Empcode;
string EmpName;
int basicSalary;
public:
Employee(int Empcode, string EmpName, int basicSalary){
    this->Empcode=Empcode;
    this->EmpName=EmpName;
    this->basicSalary=basicSalary;
};
void Display(){
    cout<<"Employee code: "<<Empcode<<endl;
    cout<<"Employee name: "<<EmpName<<endl;
    cout<<"Employee basic salary: "<<basicSalary<<endl;
};
};

int main(){
    Employee E(551,"Muskan",10000000);
    E.Display();
    return 0;
}