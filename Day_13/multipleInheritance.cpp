#include <iostream>
using namespace std;

class A{
    public:
    int num1;
    int num2;
    void fun(){
        cout<<"Happy learning!\n";
    };
};
class B : public A{
    int num1;
    int num2;
    public:
    B(int a, int b){
        num1 = a;
        num2 = b;
    }
    void show(){
        cout<<num1<<" "<<num2<<endl;
    }
};

int main(){
    B obj1(2,3);
    obj1.fun();
    obj1.show();
    return 0;
} 