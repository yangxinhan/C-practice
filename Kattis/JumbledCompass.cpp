#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int change = b - a;
    if (change > 180) {
        change -= 360;
    } else if (change < -180) {
        change += 360;
    } else if (change == -180) {
        change = 180;
    }
    cout << change << "\n";
    return 0;
}