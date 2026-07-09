#include <iostream>
using namespace std;
class A{
    int num;
    public:
    A(){
        cout<<"A class constructor\n";
    }
    void show(){
        cout<<num<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"B class constructor\n";
    }
};
class C:public A, public B{
    public:
    C(){
        cout<<"C class constructor\n";
    }
    ~C(){
        cout<<"C class Destructor\n";
    }
};
int main(){
    C obj;
    obj.show();
    cout<<"Happy Learning!!\n";
    return 0;
}