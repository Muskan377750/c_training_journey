#include <iostream>
#include <string.h>
using namespace std;
class student{
    private:
    int student_id;
    string Name;
    string Branch;
    int marks[5];
    public:
    void setData(int i ,string n,string b){
        student_id = i;
        Name = n;
        Branch = b;
    };
    void setMarks(int temp[]){
        for(int i=0; i<5; i++){
            marks[i]=temp[i] ;
        }
    };
    void calc_percentage(){
        int sum = 0;
        for(int i=0; i<5; i++){
            sum+=marks[i];
        }
        float percentage = sum*100.0/500;
        cout<<"Percentage of marks: "<<percentage<<"%\n";
    };
};

int main(){
    int arr1[] = {90,99,80,85,98};
    student s1;
    s1.setData(101,"Muskan","CSE");
    s1.setMarks(arr1);
    s1.calc_percentage();
    int arr2[]={89,99,79,96,90};
    student s2;
    s2.setData(102,"Mannat","CSE");
    s2.setMarks(arr2);
    s2.calc_percentage();
    return 0;
}