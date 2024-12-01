#include <iostream>
using namespace std;
typedef long long ll;

ll mod_pow(ll a, ll b, ll c) {
    ll result = 1;
    a %= c;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % c;
        }
        a = (a * a) % c;
        b /= 2;
    }
    return result;
}

int main() {
    ll A, B, C;
    cin >> A >> B >> C;
    cout << mod_pow(A, B, C) << endl;
    return 0;
}