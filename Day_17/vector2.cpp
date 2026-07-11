#include <iostream>
using namespace std;
template <class T>
class vector{
    T *ptr;
    int size;
    public:
    vector(int s){
        ptr = new T[size=s]; //memory allocation
        for(int i=0; i<s; i++){
            ptr[i] =0;
        }
    };
     vector(T arr[], int s){
        ptr = new T[size=s];
        for(int i=0; i<s; i++){
            ptr[i] =arr[i];
        }
    }

    void show(){
        for(int i=0; i<size; i++){
            cout<<ptr[i]<<" ";
        } 
    }
    T& operator[](int index){
        return ptr[index];
    }
};

int main(){
    // vector<int>v1(10);
    // v1.show();
    int arr[5] = {1,2,3,4,5};
    vector<int>v2(arr,5);
    v2.show();
    cout<<endl;
    cout<<v2[2];
    return 0;
}