#include <iostream>
using namespace std;

class student{
    private:
    int RollNo;
    string Name;
    char Batch;
    public:
    static string clg_name;
    void setData(int r,string s, char b){
        RollNo = r;
        Name = s;
        Batch = b;
    };
    void showData(){
        cout<<RollNo<<" "<<Name<<" "<<Batch<<" "<<clg_name<<"\n";
    }
    //for getting printed without any object we use static
    // In static function we cannnot use non static variable
    static void show_clg(){
        cout<<clg_name;
    }
};

string student::clg_name = "RBPU";

int main(){
    // student s1,s2,s3;
    // s1.setData(101,"Raju",'A');
    // s1.showData();
    // s2.setData(102,"Rani",'B');
    // s2.showData();
    student::show_clg();
    return 0;
}
