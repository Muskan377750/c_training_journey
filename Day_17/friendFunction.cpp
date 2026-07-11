#include <iostream>
using namespace std;

class A{
    int marks = 10;
    friend void showMarks(A &ob);
};
void showMarks(A &ob){
    cout<<ob.marks;
};

int main(){
    A obj;
    showMarks(obj);
    return 0;
}