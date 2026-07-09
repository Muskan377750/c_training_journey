#include <iostream>
using namespace std;

class A{
    int i;
    public:
    A(int i){
        this->i = i;
    }
    void printNum(){
        cout<<i<<endl;
    };
};

class B:public A{
    int j;
    public:
    B(int i,int j) : A(i){
        this->j = j;
    }
    void printNum(){
        A::printNum();
        cout<<j<<endl;
    };
};

int main(){
    B obj(10,20);
    obj.printNum();
    return 0;
}