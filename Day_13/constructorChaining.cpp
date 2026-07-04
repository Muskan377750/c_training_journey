#include <iostream>
using namespace std;

class A{
    public:
   A(){
    cout<<"A class constructor\n";
   }
};
class B:public A{
    public:
    B(){
    cout<<"B class constructor\n";
   }
};

int main(){
    B obj1;
    A obj2;
    return 0;
} 