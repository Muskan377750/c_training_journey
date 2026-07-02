#include <iostream>
using namespace std;
class student{
int rollNo;
string Name;
public:
void setData(int r, string n){
    rollNo = r;
    Name = n;
};
void showData(){
    cout<<rollNo<<" "<<Name<<endl;
};
};

int main(){
    student s1;
    s1.showData();//garbage value
    return 0;
}