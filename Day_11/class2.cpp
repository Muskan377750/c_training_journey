#include <iostream>
using namespace std;

class student{
    private:
    //instance data member
    //Non-static
    int RollNo;
    string Name;
    char Batch;//non-static variable = instance data member
    //class variable
    //static variable
    public:
    static string clg_name;//static variable = class data member
    void setData(int r,string s, char b){
        RollNo = r;
        Name = s;
        Batch = b;
    };
    void showData(){
        cout<<RollNo<<" "<<Name<<" "<<Batch<<" "<<clg_name<<"\n";
    }
};

string student::clg_name = "RBPU";

int main(){
    student s1,s2,s3;
    s1.setData(101,"Raju",'A');
    s1.showData();
    s2.setData(102,"Rani",'B');
    s2.showData();
    return 0;
}
