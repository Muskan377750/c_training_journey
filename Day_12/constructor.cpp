#include <iostream>
using namespace std;
class A{
public:
A(){
    cout<<"This is a non-parameterized constructor\n";
}
A(int a){
    cout<<"This is a parameterized constructor\n";
}
A(int a, int b){
    cout<<"This is a two parameterized constructor\n";
}
A(int a, float b){
    cout<<"This is a two parameterized constructor\n";
}
};
int main(){
    A obj;
    A obj2(10);
    A obj3(10,20);
    A obj4(10,20.7f);
    // A obj1;
    // A obj2;
    // A obj3;
    // A obj[5];
    return 0;
}