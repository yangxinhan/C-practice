#include <iostream>
#include <vector>
using namespace std;

bool checkK(vector<int>& a, int n, int k) {
    if (n / k < 2) return false;
    for (int i = k - 1; i + k < n; i += k) {
        if (a[i] >= a[i + k]) {
            return false;
        }
    }
    return true;
}

int misK(vector<int>& a, int n) {
    for (int k = 1; k <= n; k++) {
        if (checkK(a, n, k)) {
            return k;
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = misK(a, n);
    cout << (ans == -1 ? "ABORT!" : to_string(ans)) << '\n';

    return 0;
}