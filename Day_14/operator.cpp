#include <iostream>
using namespace std;

class Days{
    string arr[7] = {"mon","tue","wed","thurs","fri","sat","sun"};
    public:
    string operator [](int index){
        if(index>=0&&index<7){
        return this->arr[index];
    }else{
        return "invalid";
    }
}
};

int main(){
    Days d1;
    cout<<d1[5];
    return 0;
}