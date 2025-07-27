#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (N == 1) {
        for (int q = 0; q < Q; ++q) {
            long long L, R, V;
            cin >> L >> R >> V;
            cout << 0 << "\n";
        }
        return 0;
    }

    vector<long long> B(N - 1);
    long long current_inconvenience = 0LL;

    for (int i = 0; i < N - 1; ++i) {
        B[i] = A[i+1] - A[i];
        current_inconvenience += abs(B[i]);
    }

    for (int q = 0; q < Q; ++q) {
        long long L, R, V_val;
        cin >> L >> R >> V_val;

        L--; 
        R--;

        if (L > 0) {
            long long old_b_val = B[L-1];
            current_inconvenience -= abs(old_b_val);
            B[L-1] += V_val;
            current_inconvenience += abs(B[L-1]);
        }

        if (R < N - 1) { 
            long long old_b_val = B[R];
            current_inconvenience -= abs(old_b_val);
            B[R] -= V_val;
            current_inconvenience += abs(B[R]);
        }
        
        cout << current_inconvenience << "\n";
    }

    return 0;
}
