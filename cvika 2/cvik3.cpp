#include <iostream>
using namespace std;

int main(void) {
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++) {
        for (int j = 1; j <= a; j++) {
            cout << " " << j;
        }
        cout << endl;
    }
}