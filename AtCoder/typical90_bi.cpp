#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a = 0;
    vector<int> z;
    vector<int> ans;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t, x;
        cin >> t >> x;
        if(t == 1){
            z.insert(z.begin(), x);
        } else if (t == 2) {
            z.insert(z.end(), x);
        } else if (t == 3) {
            ans.push_back(z[x - 1]);
            //a++;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}