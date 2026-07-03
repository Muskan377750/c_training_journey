#include <iostream>
using namespace std;

int main(){
    // reference variable
    int a = 100;
    int &temp = a;
    temp = 20;
    cout<<a<<endl;
    return 0;
}