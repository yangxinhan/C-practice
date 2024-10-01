#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll a, b, c, max, min;
    cin >> a >> b >> c;
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    min = a < b ? (a < c ? a : c) : (b < c ? b : c);
    cout << max - min;

    return 0;
}