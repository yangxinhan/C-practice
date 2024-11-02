#include <iostream>
#include <cmath>
using namespace std;
#define  ll long long

bool isPerfectPower(int x, int p) {
    if (x < 0 && p % 2 == 0) return false;
    double b = pow(abs(x), 1.0/p);
    int lower = floor(b);
    int upper = ceil(b);
    ll check_lower = 1;
    ll check_upper = 1;
    for (int i = 0; i < p && check_lower <= abs(x); i++) {
        check_lower *= lower;
    }
    for (int i = 0; i < p && check_upper <= abs(x); i++) {
        check_upper *= upper;
    }
    
    return (check_lower == abs(x)) || (check_upper == abs(x));
}

int findLargestPower(int x) {
    if (x == 1 || x == -1) return 1;
    if (x == 0) return 1;
    for (int p = 32; p >= 1; p--) {
        if (isPerfectPower(x, p)) {
            return p;
        }
    }
    return 1;
}

int main() {
    int x;
    while (true) {
        cin >> x;
        if (x == 0) break;
        cout << findLargestPower(x) << endl;
    }
    return 0;
}