#include <iostream>
using namespace std;

class A{
    int x = 10;
    friend class B;
};
class B{
    public:
    void show(A &ob){
        cout<<ob.x;
    }
};

int main(){
    A obj;
    B b;
    b.show(obj);
    return 0;
}