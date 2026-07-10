#include <iostream>
using namespace std;

class payment{
    public: 
    void pay(){
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
    payment *ptr = new Upi(); // run time :- decision must be taken at runtime 
    ptr->pay(); //compile time
    return 0;
}