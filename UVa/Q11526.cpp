#include <iostream>
using namespace std;
#define ll long long

ll H(int n){
    ll res = 0;
    for( int i = 1; i <= n; i=i+1){
        res = (res + n/i);
    }
    return res;
}

int main() {
    ll n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << H(a) << endl;
    }

    return 0;
}