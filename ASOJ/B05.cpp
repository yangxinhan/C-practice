#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    if (n >= 90 && n <= 100) {
        cout << "S";
    } else if (n >= 80 && n < 90) {
        cout << "A";
    } else if (n >= 70 && n < 80) {
        cout << "B";
    } else if (n >= 60 && n < 70) {
        cout << "C";
    } else if (n >= 50 && n < 60) {
        cout << "D";
    } else if (n >= 40 && n < 50) {
        cout << "E";
    } else {
        cout << "F";
    }

    return 0;
}