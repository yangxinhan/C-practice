#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;
    
    ll ans = 0;
    while(n > 0) {
        n /= k;
        ans++;
    }
    
    cout << ans << "\n";
    return 0;
}