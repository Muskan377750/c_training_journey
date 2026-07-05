#include <iostream>
using namespace std;

class A{
    public:
    int num1;
    A(){
    cout<<"A class constructor\n";
   }
   A(int a){
    cout<<"A class constructor(int)\n";
    num1 = a;
   }
   void show(){
    cout<<"num1 : "<<num1<<endl;
   }
};
class B:public A{
    public:
    B(int a,int b):A(b){
    cout<<"B class constructor(int,int)\n";
   }
    B(){
    cout<<"B class constructor\n";
   }
};

int main(){
    B obj1(12,10);
    obj1.show();
    return 0;
} 