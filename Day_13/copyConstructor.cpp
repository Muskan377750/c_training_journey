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
};

int main(){
    A obj1(34,56);
    A obj2 = obj1;// copy constructor
    obj1.show();
    obj2.show();
    return 0;
}