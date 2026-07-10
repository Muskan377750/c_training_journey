#include <iostream>
using namespace std;

class A{
    public:
    int a;
   protected:
   int b;
};
class B: public A{
    public:
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    B obj;
    obj.show(); //diamond problem
    return 0;
}