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
    A(A &ob){
        this->a = ob.a;  /// copy constructor
        this->b = ob.b;
    }
};

int main(){
    A obj1(34,56);
    A obj2(obj1);
    obj2.show();
    return 0;
}