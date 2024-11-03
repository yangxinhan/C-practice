#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

ll H(int n) {
    ll res = 0;
    for (ll i = 1, last; i <= n; i = last + 1) {
        ll q = n / i;
        last = n / q;
        res += q * (last - i + 1);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << H(n) << '\n';
    }
    return 0;
}