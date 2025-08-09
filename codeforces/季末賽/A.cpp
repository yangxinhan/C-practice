#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    cin >> q;

    vector<priority_queue<int, vector<int>, greater<int>>> restaurants(365);
    
    int current_day = 1;
    
    while (q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int x;
            cin >> x;
            restaurants[(x - 1) % 365].push(x);
        } else {
            int target_mod = (current_day - 1) % 365;
            
            if (restaurants[target_mod].empty()) {
                cout << -1 << "\n";
            } else {
                int min_distance = restaurants[target_mod].top();
                restaurants[target_mod].pop();
                cout << min_distance << "\n";
            }
            
            current_day++;
        }
    }
    
    return 0;
}