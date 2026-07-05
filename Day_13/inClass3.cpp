#include <iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    A(){}
    A(int a, int b){
        this->a = a;
        this->b = b;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    };
    void copy(A &ob2){
    this->a = ob2.a;
    this->b = ob2.b;
};
};

int main(){
    A obj1(34,56);
    A obj2;
    obj2.copy(obj1);
    obj2.show();
    return 0;
}