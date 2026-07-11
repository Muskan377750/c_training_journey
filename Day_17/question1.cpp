#include <iostream>
using namespace std;

int a=100;

int main(){
    int a = 10;
    cout<<a<<endl; //local
    cout<<::a<<endl; //global scope
    return 0;
}