#include <iostream>
using namespace std;

class A{
    public:
    void msg(){
        cout<<"Koi deewana hai!";
    };
};
class B{
    A obj;
    public:
    void Display(){
        cout<<"Msg: "; // Has-a-relation
        obj.msg();
    }
};

int main(){
    B obj;
    obj.Display();
    return 0;
} 