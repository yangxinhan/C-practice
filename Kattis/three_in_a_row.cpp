#include <iostream>
using namespace std;
#define ll long long

ll three_numbers(ll n) {
    ll count = 0;
    ll a = 1;
    while (true) {
        if (a > n / 6) {
            break;
        }
        ll product = a * (a + 1) * (a + 2);
        if (product >= n) {
            break;
        }
        count++;
        a++;
    }
    return count;
}

int main() {
    ll n;
    cin >> n;
    ll x = three_numbers(n);
    cout << x << endl;
    
    return 0;
}