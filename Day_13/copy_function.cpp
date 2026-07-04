#include <iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    A(){}
    A(int a, int b){
        this->a = a;
        this->b = b;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
    void copy(A &ob){
        a = ob.a;
        b = ob.b;
    }
    //  void copy(A *this,A &ob){
    //     this->a = ob.a;    // Internal functionality
    //     this->b = ob.b;
    // }
};

int main(){
    A obj1(34,56);
    // A obj2 = obj1;// copy constructor
    // obj1.show();
    // obj2.show();
    A obj2;
    obj2.copy(obj1);
    obj2.show();
    return 0;
}