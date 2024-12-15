#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    const int MOD = 1000000007;
    long long power = 1;
    
    for (int i = 1; i <= n; i++) {
        power = (power * i) % MOD;
    }
    
    cout << power << endl;
    return 0;
}