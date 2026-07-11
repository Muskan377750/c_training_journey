#include <iostream>
using namespace std;

// Inline function: - there will be no memory calling the call will replace with the code

inline int square(int a){
    return a*a;
};
int main(){
    cout<<square(9);
    return 0;
}