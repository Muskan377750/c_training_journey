#include <stdio.h>
#include <string.h>
class Employee{
    int employeeId;
    char name[20];
    char dept[10];
    int salary;
    public:
    void getData(int id,char n[],char d[],int s){
        employeeId=id;
        strcpy(name,n);
        strcpy(dept,d);
        salary=s;
    };
    void showData(){
        printf("%d %s %s %d",employeeId,name,dept,salary);
    }
};

int main(){
    Employee obj;
    obj.getData(15,"Rahul","CSE",50000);
    obj.showData();
    return 0;
}