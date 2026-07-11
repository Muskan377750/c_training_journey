#include <iostream>
using namespace std;
template <class T1, class T2>
class A{
    T1 num1;
    T2 num2;
    public:
    A(T1 a,T2 b){
        num1 = a;
        num2 = b;
    }
    void sum(){
        cout<<num1+num2<<endl;
    }
};
int main(){
    A <int,float> obj(10,20.9);
    A <int,float> obj1(78,98.7);
    A <int,char> obj2(78,'a');
    obj.sum();
    obj1.sum();
    obj2.sum();
    return 0;
}