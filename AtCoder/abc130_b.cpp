#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0, count = 0;
    for(int j = 0; j < n; j++){
        for(int i = j; i < n; i++){
            count += a[i];
            if(count >= k){
                ans++;
            }
        }
        count = 0;
    }
    
    
    cout << ans << endl;

    return 0;
}