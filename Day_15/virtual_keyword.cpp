// The virtual keyword is used to achieve runtime polymorphism (also called dynamic binding or late binding).

// When a member function is declared as virtual in the base class, C++ decides at runtime which function to call based on the actual object, not the pointer type. 
#include <iostream>
using namespace std;

class payment{
    public: 
    virtual void pay(){ //the function that is going to override make it virtual
        cout<<"payment processing...";
    };
};
class Upi: public payment{ 
    void pay(){
        cout<<"UPI payment...";
    };
};
class CreditCard: public payment{
    void pay(){
        cout<<"Credit card payment...";
    };
};
class netBanking: public payment{
    void pay(){
        cout<<"Netbanking payment...";
    };
};

int main(){
    payment *ptr = nullptr;
    int ch; 
    cout<<"1. UPI"<<endl; 
    cout<<"2. CreditCard"<<endl;
    cout<<"3. NetBanking"<<endl;
    cin>>ch;
    switch(ch){
        case 1: ptr = new Upi();
                break;
        case 2: ptr = new CreditCard();
                break;
        case 3: ptr = new netBanking();
                break;
        default: cout<<"Try Again!"<<endl;
    }
    ptr->pay();
    return 0;
}