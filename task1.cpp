#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    string sign;

    cout << "Enter first number: ";
    cin >> a;
    cout << endl << "Enter second number: ";
    cin >> b;
    
    cout << endl << "What do you want to do with this numbers? (Enter +, -, / or *)";
    cin >> sign;
    if (sign == "+"){
        cout << a+b;
    } else if (sign == "-") {
        cout << a-b;
    } else if (sign == "/") {
        cout << a/b;
    } else if (sign == "*") {
        cout << a*b;
    } else {
        cout << "You entered wrong sign!";
    }
    return 0;
}