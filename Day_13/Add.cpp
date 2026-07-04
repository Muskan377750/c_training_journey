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
    void copy(A &ob){
        a = ob.a;
        b = ob.b;
    };
};
void add(A ob1, A ob2){
    cout<<ob1.a+ob2.a<<" "<<ob1.b+ob2.b;
};

int main(){
    A obj1(34,56);
    A obj2;
    obj2.copy(obj1);
    add(obj1,obj2);
    return 0;
}