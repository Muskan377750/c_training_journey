#include <iostream>
using namespace std;

class Employee{
    int Empcode;
    float BasicSalary;
    public:
    Employee(int Empcode, float BasicSalary){
        this->Empcode = Empcode;
        this->BasicSalary = BasicSalary;
    };
    float calcDA(){
        float DA = 174*BasicSalary/100;
        return DA;
    };
    float calcHRA(){
        float HRA = 10*BasicSalary/100;
        return HRA;
    };
    float calcTA(){
        float TA = 500;
        return TA;
    };
    void calcNetSalary(){
        float incomeTax = 5/100;
        float DA = calcDA();
        float HRA = calcHRA();
        float TA = calcTA();
        if(BasicSalary>50000){
            float netSalary = (BasicSalary+DA+HRA+TA)-incomeTax*BasicSalary;
            cout<<netSalary;
        }else if(BasicSalary<=50000){
            float netSalary = (BasicSalary+DA+HRA+TA);
            cout<<netSalary;
        }
    }
};

int main(){
    Employee A(101,50000);
    A.calcNetSalary();
    return 0;
}