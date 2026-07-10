#include <iostream>
using namespace std;

class Password{
    string password;
    public:
    Password(string password){
        this->password = password;
    }
    bool operator==(Password &pass){
        return password == pass.password;
    }
};


int main(){
    Password p1("Hello");
    Password p2("Hello");
    if(p1 == p2){
        cout<<"Right";
    }else{
        cout<<"Wrong";
    }
    return 0;
}