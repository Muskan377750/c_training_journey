#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
    array<int,5> arr = {10,20,40,50,30};
    cout<<"Original Array\n";
    for(auto x: arr){
        cout<<x<<" ";
    }
    
    cout<<"\n\nAccessing Elements\n";
    cout<<" Front : "<<arr.front()<<endl;
    cout<<" Back : "<<arr.back()<<endl;
    cout<<" At(2) : "<<arr.at(2)<<endl;
    cout<<" Index 3: "<<arr[3]<<endl;

    cout<<"\nSize: "<<arr.size()<<endl;
    cout<<" Max Size: "<<arr.max_size()<<endl;
    cout<<" Is Empty: "<<arr.empty()<<endl;

    arr.fill(100);

    cout<<"\nAfter fill()\n";
    for(auto x:arr){
        cout<<x<<" ";
    }

    array<int,5> arr2 = {5,4,3,2,1};

    arr.swap(arr2);

    cout<<"\n\nAfter swap()\n";
    for(auto x:arr){
        cout<<x<<" ";
    }

    sort(arr.begin(),arr.end());

    cout<<"\n\nAfter sort()\n";
    for(auto it= arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }

    reverse(arr.begin(),arr.end());

    cout<<"\n\nReverse iterator()\n";
    for(auto it= arr.rbegin();it!=arr.rend();it++){
        cout<<*it<<" ";
    }
    return 0;
}