#include <iostream>
using namespace std;

class A{
int a;
public:
void fun();
};

int main(){
    A obj;
    obj.fun();
    return 0;
}
void A::fun(){
    cout<<"Hello";
}