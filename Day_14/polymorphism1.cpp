#include <iostream>
using namespace std;

class Add{
    public:
    void fun(int a, int b){
        cout<<"a+b: "<<a+b<<endl;    ///overloading; static, static binding, compile time polymorphism
    }
    void fun(int a, int b, int c){
        cout<<"a+b+c: "<<a+b+c<<endl;
    }
    void fun(int a, int b, int c, int d){
        cout<<"a+b+c+d: "<<a+b+c+d<<endl;
    }
    void fun(int a, char ch){
        cout<<"a+ch: "<<a+ch<<endl;    ///overloading; static, static binding, compile time polymorphism
    }
};

int main(){
    Add obj;
    obj.fun(10,20);
    obj.fun(10,20,30);
    obj.fun(10,20,30,40);
    obj.fun(10,'A');
    return 0;
}