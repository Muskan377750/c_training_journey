#include <iostream>
using namespace std;

class Programming{
    public:
    Programming(){
        cout<<"I love programming languages"<<endl;
    };
    Programming(const string& s){
        cout<<"I love "<<s<<endl;
    }
};

int main(){
    Programming P;
    Programming P1("cpp");
    return 0;
}