#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<long long> mod(200, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mod[x % 200]++;
    }
    long long ans = 0;
    for (int i = 0; i < 200; i++) {
        ans += mod[i] * (mod[i] - 1) / 2;
    }
    
    cout << ans << endl;
    return 0;
}