#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "正三角形\n";
    }else if (a == b || b == c || a == c) {
        if (a == b && a + b > c) {
            cout << "等腰三角形\n";
        }else if (b == c && b + c > a) {
            cout << "等腰三角形\n";
        }else if (a == c && a + c > b) {
            cout << "等腰三角形\n";
        }else {
            cout << "無法形成三角形\n";
        }
    }else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
        cout << "直角三角形\n";
    }else if (a + b > c || b + c > a || a + c > b) {
        cout << "普通三角形\n";
    }else {
        cout << "無法形成三角形\n";
    }

    return 0;
}