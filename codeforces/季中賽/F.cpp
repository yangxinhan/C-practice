#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<string> names(n);
    vector<vector<bool> > solved(n, vector<bool>(m));
    
    for(int i = 0; i < n; i++){
        cin >> names[i];
        int x;
        for(int j = 0; j < m; j++){
            cin >> x;
            solved[i][j] = x;
        }
    }
    
    for(int j = 0; j < m; j++){
        bool first = true;
        bool found = false;
        
        for(int i = 0; i < n; i++){
            if(solved[i][j]) {
                if(!first) cout << " ";
                cout << names[i];
                first = false;
                found = true;
            }
        }
        
        if(!found) cout << "-1";
        cout << "\n";
    }
    
    return 0;
}
