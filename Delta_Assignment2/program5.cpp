#include <iostream>
using namespace std;

class ATM{
    int Accountno;
    int balance;
    public:
    ATM(int Accountno,int balance){
        this->Accountno=Accountno;
        this->balance=balance;
    };
    void Deposit(){
        int amount;
        cout<<"Enter the amount you want to deposit: ";
        cin>>amount;
        balance += amount;
        cout<<"Your current balance is now: "<<balance<<endl;
    };
    void Withdraw(){
        int amount;
        cout<<"How much money you want to withdraw? Please enter: ";
        cin>>amount;
        balance -= amount;
        cout<<"Your current balance is now: "<<balance<<endl;;
    };
    void Balance(){
        cout<<"Your current balance is: "<<balance<<endl;
    };
};

int main(){
    ATM a(10289,10000000);

    cout<<"Choose what you want to perform:-"<<endl;
    cout<<"1. Balance"<<endl;
    cout<<"2. Withdraw"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Exit"<<endl;

    int num;
    cin>>num;

    switch(num){
        case 1: a.Balance();
                break;
        case 2: a.Withdraw();
                break;
        case 3: a.Deposit();
                break;
        case 4: break;
        default: cout<<"Invalid input!!!"<<endl;
    }
    
    return 0;
}