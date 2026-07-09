#include <iostream>
using namespace std;
class A{
    int num;
    public:
    A(){
        cout<<"A class constructor\n";
    }
    void show(){
        cout<<num<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"B class constructor\n";
    }
};
class C:public B{
    public:
    C(){
        cout<<"C class constructor\n";
    }
};
int main(){
    C obj;
    obj.show();
    return 0;
}