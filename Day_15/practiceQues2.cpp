#include <iostream>
using namespace std;
class A{
    int a;
    virtual void fun1(){}; //vptr is a pointer which is used by virtual in 32-bit compiler its size is 4 and in 64-bit it is 8.
};
int main(){
    A obj;
    cout<<sizeof(obj);
    return 0;
}