#include <iostream>
using namespace std;
class A{
    int num;
    public:
    void fun_A(){
        cout<<"fun from A"<<endl;
    }
};
class B: public A{
    public:
    void fun_B(){
        cout<<"fun from B"<<endl;
    }
};
class C:public B{
    public:
    C(){
    cout<<"Hi from C\n";
    }
};
int main(){
    C obj;
    obj.fun_A();
    obj.fun_B();
    return 0;
}