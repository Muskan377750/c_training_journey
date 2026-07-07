#include <iostream>
using namespace std;

class Calculation{
    private:
    int num1;
    int num2;
    public:
    void setData(int n1, int n2){
        num1=n1;
        num2=n2;
    }
    void sum(){
        cout<<"Sum is "<<num1+num2<<endl;
    };
    void diff(){
        cout<<"Difference is "<<num1-num2<<endl;
    };
    void mul(){
        cout<<"Multiplication is "<<num1*num2<<endl;
    };
    void div(){
        cout<<"Division is "<<num1/num2<<endl;
    };
};

int main(){
    Calculation c1;
    c1.setData(9,3);
    c1.sum();
    c1.diff();
    c1.mul();
    c1.div();
    return 0;
}