#include <iostream>
using namespace std;
template <class T>
    T add(T a, T b){
        cout<<a+b<<endl;
    }

int main(){
    add(1,2);
    add(1.5,2.5);
    add('a','b');
    add("hello","world"); //error for string
    return 0;
}