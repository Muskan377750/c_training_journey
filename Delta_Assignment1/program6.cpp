#include <iostream>
using namespace std;

class withdrawal{
    private:
    int accountNo;
    int balance;
    public:
    void setData(int ac, int b){
        accountNo = ac;
        balance = b;
    };
    void withDrawal(int withDrawal){
        if(withDrawal>balance){
            cout<<"Not enough balance"<<endl;
        }else{
        balance-=withDrawal;
        cout<<"Balance: "<<balance<<endl;
        }
    };
    void deposited(int n){
        balance+=n;
        cout<<"Balance: "<<balance<<endl;
    }

};

int main(){
    withdrawal w;
    w.setData(12345,50000);
    w.withDrawal(1000);
    w.deposited(1000);
    return 0;
}