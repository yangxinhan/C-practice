#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n, x;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cin >> x;
    
    ll cycles = x / sum;
    ll count = cycles * n;
    ll remaining = x - (cycles * sum);
    
    for (int i = 0; remaining >= 0; i++) {
        count++;
        remaining -= a[i];
    }
    
    cout << count << endl;
    return 0;
}