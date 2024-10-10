#include <iostream>
using namespace std;

int main() {
    int n, x, t;
    cin >> n;

    while (cin >> x) {
        
        if (x == 0) break;
        if (x % n == 0) {
            t = x / n;
            cout << t << "\n";
        }else{
            t = x / n + 1;
            cout << x * t - n << "\n";
        }
    }

    return 0;
}