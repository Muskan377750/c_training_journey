#include <iostream>
using namespace std;

template <class T1>

int search(T1 arr[],int n,T1 el){
    for(int i = 0; i< n; i++){
        if(arr[i]==el){
            return i;
        }
    }
    return -1;
};

int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    char arr1[10] = {'a','b','c','d','e','f','g','h','i','j'};
    float arr2[10] = {20.6,90.4,20.1,20.2,98.7,67.9,98.6,89.9,78.0,98.0};
    int n = sizeof(arr)/sizeof(int);
    int n1 = sizeof(arr1)/sizeof(char);
    int n2 = sizeof(arr2)/sizeof(float);
    cout<<search(arr,n,2)<<endl;
    cout<<search(arr1,n1,'f')<<endl;
    // cout<<search(arr2,n2,20.28f);
    cout<<search<float>(arr2,n2,20.6);
    return 0;
}