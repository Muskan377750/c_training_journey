#include <iostream>
using namespace std;

class Volume{
    int s;
    public:
    Volume(int s){
        this->s = s;
    };
    void volume(){
        cout<<"Volume of cube is "<<s*s*s<<endl;
    };
};

int main(){
    Volume v1(5);
    v1.volume();
    return 0;
}