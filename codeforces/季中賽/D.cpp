#include <iostream>
using namespace std;
#define ll long long

bool has_seven(ll x){
    string s = to_string(x);
    return s.find('7') != string::npos;
}

ll solve(ll n){
    ll left = 1, right = n * 20;
    ll ans = 0;
    
    while(left <= right){
        ll mid = left + (right - left) / 2;
        ll count = 0;

        for(ll i = 1; i <= mid; i++){
            if(!has_seven(i)){
                count++;
            }
            if(count > n){
                break;
            }
        }
        
        if(count >= n){
            ans = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    while (has_seven(ans)) ans++;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}
