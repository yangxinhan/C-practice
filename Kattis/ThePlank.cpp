#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

long long solve(long long n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    if (memo[static_cast<size_t>(n)] != -1) return memo[static_cast<size_t>(n)];
    
    memo[static_cast<size_t>(n)] = solve(n-1) + solve(n-2) + solve(n-3);
    return memo[static_cast<size_t>(n)];
}

int main() {
    long long n;
    cin >> n;
    memo.assign(static_cast<size_t>(n+1), -1);
    cout << solve(n) << endl;
    return 0;
}
