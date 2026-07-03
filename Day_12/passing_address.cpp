#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};

int main(){
    int a = 200;
    int b = 300;
    cout<<a<<endl;
    cout<<b<<endl;
    swap(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}