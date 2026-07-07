#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    string city;
    int pincode;

    void setData(string n,int a,string c,int p){
        name = n;
        age = a;
        city = c;
        pincode = p;
    };  
    void printData(){
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"city : "<<city<<endl;
        cout<<"pincode : "<<pincode<<endl;
    };
};


int main(){
    student s;
    s.setData("Muskan",23,"Hoshiarpur",146001);
    s.printData();
    return 0;
}
