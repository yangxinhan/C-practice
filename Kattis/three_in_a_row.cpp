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
    long long n;
    cin >> n;
    ll result = three_numbers(n);
    cout << result << endl;
    
    return 0;
}