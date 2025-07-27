#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric> 
using namespace std;
using ll = long long;

void print_uint128(__int128_t n) {
    if (n == 0) {
        cout << "0";
        return;
    }
    string s = "";
    while (n > 0) {
        s += (char)((n % 10) + '0');
        n /= 10;
    }
    reverse(s.begin(), s.end());
    cout << s;
}

bool can_take_k_rides(ll val, const vector<ll>& a, ll K_target) {
    if (K_target == 0) return true;
    if (val < 0) return true;

    ll current_num_rides = 0;
    for (ll attraction_initial_fun : a) {
        if (attraction_initial_fun >= val) {
            current_num_rides += (attraction_initial_fun - val + 1);
            if (current_num_rides >= K_target) {
                return true;
            }
        }
    }
    return current_num_rides >= K_target;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    ll K;
    cin >> N >> K;

    vector<ll> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (K == 0) {
        cout << "0\n";
        return 0;
    }

    ll low_ok = 0; 
    ll high_ok = 2000000000LL + 7;
    ll final_ok_threshold = 0; 

    while (low_ok <= high_ok) {
        ll mid_ok = low_ok + (high_ok - low_ok) / 2;
        if (can_take_k_rides(mid_ok, A, K)) {
            final_ok_threshold = mid_ok;
            low_ok = mid_ok + 1; 
        } else {
            high_ok = mid_ok - 1;
        }
    }
    
    __int128_t total_accumulated_fun = 0;
    ll rides_taken_count = 0;

    for (ll current_attraction_val : A) {
        if (current_attraction_val > final_ok_threshold) {
            ll num_rides_from_this_attraction = current_attraction_val - final_ok_threshold;
            rides_taken_count += num_rides_from_this_attraction;
            __int128_t sum_fun_this_attraction = (__int128_t)(current_attraction_val + final_ok_threshold + 1) * num_rides_from_this_attraction / 2;
            total_accumulated_fun += sum_fun_this_attraction;
        }
    }

    ll remaining_rides_needed = K - rides_taken_count;
    if (remaining_rides_needed > 0) {
        total_accumulated_fun += (__int128_t)remaining_rides_needed * final_ok_threshold;
    }

    print_uint128(total_accumulated_fun);
    cout << "\n";

    return 0;
}

