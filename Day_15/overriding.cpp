#include <iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"fun - A";
    };
};
class B: public A{
    public:
    void fun(){
        cout<<"fun - B";
    };
};

int main(){
    // B obj; //stack
    // obj.fun();
    // B *ptr = new B();
    // ptr->fun();  //heap
    A *ptr = new B();
    ptr->fun();
    return 0;
}