#include <iostream>
using namespace std;

class Calculation{
    int num1;
    int num2;
    public:
    Calculation(int num1, int num2){
        this->num1 = num1;
        this->num2 = num2;
    };
    void addition(){
        cout<<"Addition = "<<num1+num2<<endl;
    };
    void subtraction(){
        cout<<"Subtraction = "<<num1-num2<<endl;
    };
    void multiplication(){
        cout<<"Multiplication = "<<num1*num2<<endl;
    };
    void division(){
        cout<<"Division = "<<num1/num2<<endl;
    };
};

int main(){
    Calculation c1(4,2);
    c1.addition();
    c1.subtraction();
    c1.multiplication();
    c1.division();
    return 0;
}