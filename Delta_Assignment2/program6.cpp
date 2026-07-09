#include <iostream>
using namespace std;

class Mobile{
    string brand;
    int price;
    string color;
    int width;
    int height;
    public:
    Mobile(string brand,int price, string color, int width, int height){
        this->brand = brand;
        this->price = price;
        this->color = color;
        this->width = width;
        this->height = height;
    };
    void Display(){
        cout<<"The brand of the mobile is "<<brand<<endl;
        cout<<"The price of the mobile is "<<price<<endl;
        cout<<"The colour of the mobile is "<<color<<endl;
        cout<<"The width of the mobile is "<<width<<" inches"<<endl;
        cout<<"The height of the mobile is "<<height<<" inches"<<endl;
    };
};

int main(){
    Mobile m("Iphone",150000,"White",5,7);
    m.Display();
    return 0;
}