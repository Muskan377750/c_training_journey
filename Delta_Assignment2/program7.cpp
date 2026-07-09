#include <iostream>
using namespace std;

class Mobile{
    string brand;
    int price;
    string color;
    public:
    Mobile(){};
    void setData(string brand,int price,string color){
        this->brand=brand;
        this->price=price;
        this->color=color;
    };
    int displayPrice(){
        return (price>5000);
    };
    void display(){
      if(price>1000&&price<10000){
        cout<<"Brand of mobile: "<<brand<<endl;
        cout<<"Price of mobile: "<<price<<endl;
        cout<<"Color of mobile: "<<color<<endl;
      };
    };
};

int main(){
    Mobile m[5];
    int price;
    string brand;
    string color;
    for(int i=0;i<5;i++){
        cout<<"Enter brand, price and color of mobile: ";
        cin>>brand>>price>>color;
        m[i].setData(brand,price,color);
    };

    int total = 0;
    for(int i=0;i<5;i++){
     total += m[i].displayPrice();
    };

    cout<<"Total no. of mobiles whose price is greater than 5000 : "<<total<<endl;
    for(int i=0; i<5; i++){
        m[i].display();
    }

    return 0;
}