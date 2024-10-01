#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll ans, t, x;
    cin >> ans >> t;
    x = ans - t;
    if(ans == t) {
        t = t - 3;
        x = ans - t;
    }
    cout << x << "+" << t << "=" << ans << endl;

    return 0;
}