#include <iostream>
using namespace std;
int main() {
    int s, a = 0;
    cin >> s;
    while (s) {
        a *= 10;
        a += s % 10;
        s /= 10;
    }
    cout << a << endl;

    return 0;
}