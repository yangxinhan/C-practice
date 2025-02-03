#include <iostream>
#include <vector>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

int countPossibleLetters(int l, int r){
    int count = 0;

    for(int i = 65; i <= 90; i++){
        if(l <= i && i <= r){
            count++;
        }
    }

    for(int i = 97; i <= 122; i++){
        if(l <= i && i <= r){
            count++;
        }
    }
    return count;
}

bool canPlaceLetter(char c, int l, int r){
    return (l <= toupper(c) && toupper(c) <= r) || (l <= tolower(c) && tolower(c) <= r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    for(int i = 0; i < n; i++){
        cin >> r[i];
    }

    if(n < 5){
        cout << "0\n";
        return 0;
    }

    ll ans = 0;
    string target = "SCIST";

    if(n == 5){

        ll ways = 1;
        for(int i = 0; i < 5; i++){
            if(!canPlaceLetter(target[i], l[i], r[i])){
                cout << "0\n";
                return 0;
            }

            if(canPlaceLetter(target[i], l[i], r[i])){
                ways = (ways * 2) % MOD;
            }
        }
        cout << ways << "\n";
        return 0;
    }

    for(int start = 0; start <= n-5; start++){
        ll ways = 1;
        vector<bool> used(n, false);
        bool possible = true;

        for(int i = 0; i < 5; i++){
            int pos = start + i;
            if(!canPlaceLetter(target[i], l[pos], r[pos])){
                possible = false;
                break;
            }
            used[pos] = true;
            ways = (ways * 2) % MOD;
        }

        if(!possible){
            continue;
        }

        for(int i = 0; i < n; i++){
            if(!used[i]){
                ways = (ways * countPossibleLetters(l[i], r[i])) % MOD;
            }
        }
        ans = (ans + ways) % MOD;
    }

    cout << ans << "\n";
    return 0;
}
