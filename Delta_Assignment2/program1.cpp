#include <iostream>
using namespace std;

class Area{
    int length;
    int breadth;
    public:
    Area(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    };
    void area(){
        int area = length*breadth;
        cout<<"Area of rectangle is "<<area<<endl;
    };
};

int main(){
    Area A1(3,4);
    A1.area();
    return 0;
}