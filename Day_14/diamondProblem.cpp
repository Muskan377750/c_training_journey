#include <iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"HI"<<endl;
    };
};
class B: public A{

};
class C: public A{

};
class D:public B, public C{

};

int main(){
    D obj;
    // obj.fun(); //diamond problem
    return 0;
}