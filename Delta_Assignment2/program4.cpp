#include <iostream>
using namespace std;

class Box{
    int length;
    int breadth;
    int height;
    public:
    Box(int length, int breadth, int height){
        this->length=length;
        this->breadth=breadth;
        this->height=height;
    };
    int boxArea(){
        return 2*(length*breadth+breadth*height+height*length);
    };
};

int main(){
    Box b(2,3,4);
    cout<<"Area of box = "<<b.boxArea();
    return 0;
}