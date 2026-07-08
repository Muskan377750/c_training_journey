#include <iostream>
using namespace std;

class Employee{
    int Empcode;
    float BasicSalary;
    public:
    Employee(){};
    void setData(int code, float salary){
        Empcode = code;
        BasicSalary = salary;
    }
    float calcDA(){
        float DA = 174.0*BasicSalary/100;
        return DA;
    };
    float calcHRA(){
        float HRA = 10.0*BasicSalary/100;
        return HRA;
    };
    float calcTA(){
        float TA = 500.0;
        return TA;
    };
    void calcNetSalary(){
        float incomeTax = 5.0/100;
        float DA = calcDA();
        float HRA = calcHRA();
        float TA = calcTA();
        float netSalary;
        if(BasicSalary>50000){
        netSalary = (BasicSalary+DA+HRA+TA)-incomeTax*BasicSalary;
        }else if(BasicSalary<=50000){
        netSalary = (BasicSalary+DA+HRA+TA);
        }
        cout<<"Employee code: "<<Empcode<<endl;
        cout<<"Net Salary: "<<netSalary<<endl;
    };
};

int main(){
    Employee E[5];
    int code;
    int salary;

    for(int i=0; i<5; i++){
        cout<<"Enter employee code and basic salary: ";
        cin>>code>>salary;
        E[i].setData(code,salary);
    }

    cout<<"\nEmployee Details\n";

    for(int i=0; i<5; i++){
        E[i].calcNetSalary();
    }
    
    return 0;
}