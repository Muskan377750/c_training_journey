#include <iostream>
using namespace std;

class Seconds{
    int seconds;
    int minutes;
    int hours;
    public:
    Seconds(int seconds, int minutes, int hours){
        this->seconds = seconds;
        this->minutes = minutes;
        this->hours = hours;
    };
    void calcTime(){
        int s1 = hours*60*60;
        int s2 = minutes*60;
        int s3 = s1+s2+seconds;
        cout<<"Your time in seconds: "<<s3<<endl;
    };
};

int main(){
    int hours;
    int minutes;
    int seconds;
    cout<<"Enter hours, minutes & seconds: ";
    cin>>hours>>minutes>>seconds;
    Seconds s1(seconds,minutes,hours);
    s1.calcTime();
    return 0;
}