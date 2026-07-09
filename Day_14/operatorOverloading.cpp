#include <iostream>
using namespace std;

class A{
    int num ;
    public:
    A(int a){
        this->num = a;
    }
A operator +(A &ob){ //spaces are allowed between tokens in function name
   cout<<this->num+ob.num<<endl;
}
A operator -(A &ob){
   cout<<this->num-ob.num<<endl;
}
A operator *(A &ob){
   cout<<this->num*ob.num<<endl;
}
};


int main(){
    A obj1(12);
    A obj2(10);
    obj1 + obj2;
    obj1 - obj2;
    obj1 * obj2; //A::+(obj1,obj2); obj1.+(obj2)
    return 0;
}