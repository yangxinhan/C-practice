#include <iostream>
using namespace std;

#define endl "\n"
#define ll long long

int main() {
    ll n, x, all = 0, i = 0;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    ll full_cycles = x / sum;
    all = full_cycles * sum;
    ll count = full_cycles * n;

    while (all < x) {
        all += a[i % n];
        i++;
        count++;
    }

    cout << count << endl;

    return 0;
}