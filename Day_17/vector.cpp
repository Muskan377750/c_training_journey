#include <iostream>
using namespace std;
template <class T>
class vector{
    T *ptr;
    int size;
    public:
    vector(int s){
        ptr = new T[size=s];
        for(int i=0; i<s; i++){
            ptr[i] =0;
        }
    }

    void show(){
        for(int i=0; i<size; i++){
            cout<<ptr[i]<<" ";
        } 
    }
};

int main(){
    vector<int>v1(10);
    v1.show();
}