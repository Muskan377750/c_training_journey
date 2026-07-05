#include <iostream>
using namespace std;

class A{
    public:
    void msg(){
        cout<<"Koi deewana hai!";
    };
};
class B : public A{
    public:
    void Display(){
        cout<<"Msg: "; // Has-a-relation
    }
};

int main(){
    B obj;
    obj.msg();
    return 0;
} 