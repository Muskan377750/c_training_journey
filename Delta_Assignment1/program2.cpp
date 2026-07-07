#include <iostream>
using namespace std;

class Area{
    public:
    float length;
    float breadth;
    void setDim(float l, float b){
        length=l;
        breadth=b;
    };
    void getArea(){
        float area = length*breadth;
        cout<<"The area of the rectangle is "<<area<<endl;
    };
};

int main(){
    Area A1;
    A1.setDim(4,5);
    A1.getArea();
    return 0;
}