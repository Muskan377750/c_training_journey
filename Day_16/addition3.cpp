// Object oriented approach-use concept of class and object
#include <stdio.h>
using namespace std;

class Add{
    //Data
    int a,b,c;
    public:
    //function local variable
    void setData(int x, int y){
        a=x;
        b=y;
    };
    void cal(){
        c=a+b;
    }
    void show(){
        printf("a+b:%d",c);
    }
};

int main(){
    Add obj;
    obj.setData(10,20);
    obj.cal();
    obj.show();
    return 0;
}