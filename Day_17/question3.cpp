#include <iostream>
using namespace std;
template <class T>
class A{
    T num;
    public:
    A(T a){
        num = a;
    }
    void show(){
        cout<<num<<endl;
    }
};
int main(){
    A <int> obj(10);
    A <float> obj1(78.9);
    A <char> obj2('a');
    obj.show();
    obj1.show();
    obj2.show();
    return 0;
}