#include <iostream>
#include <conio.h>
using namespace std;

class Password {
    string password;

public:
    Password(string password) {
        this->password = password;
    };

    bool operator==(Password &pass) {
        return password == pass.password;
    };
};

string inputPassword() {
    string pass;
    char ch;

    while ((ch = getch()) != 13) {
        if (ch == 8) {
            if (!pass.empty()) {
                pass.pop_back();
                cout << "\b \b";
            }
        }
        else {
            pass += ch;
            cout << "*";
        }
    }
    cout << endl;
    return pass;
}

int main() {
    Password savedPass("hello123");

    cout << "Enter password: ";
    string current = inputPassword();

    Password enteredPass(current);

    if (savedPass == enteredPass)
        cout << "Right";
    else
        cout << "Wrong";
}