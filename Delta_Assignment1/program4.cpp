#include <iostream>
using namespace std;

class Area{
    private:
    float radius;
    public:
    void setData(float r){
        radius = r;
    };
    void AreaOfCircle(){
        float area = 3.14*radius*radius;
        cout<<"The Area of the circle is "<<area<<endl;
    };
};

int main(){
    Area a1;
    a1.setData(4.5);
    a1.AreaOfCircle();
    return 0;
}