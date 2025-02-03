#include <iostream>
#include <vector>
#include <string_view>
using namespace std;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};  // U->D
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};  // L->R
const string dir[] = {"UL", "U", "UR", "L", "R", "DL", "D", "DR"};

inline bool isValid(int x, int y, int n, int m) noexcept {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> h(n, vector<int>(m));
    pair<int,int> start, end;
    int maxH = -1, minH = 1e9;
    
    // 讀入數據並找最高點和最低點
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> h[i][j];
            if(h[i][j] > maxH) {
                maxH = h[i][j];
                start = {i, j};
            }
            if(h[i][j] < minH) {
                minH = h[i][j];
                end = {i, j};
            }
        }
    }
    
    vector<string> path;
    auto curr = start;
    
    while(true) {
        if(curr.first == end.first && curr.second == end.second) break;
        
        pair<int,int> next = {-1, -1};
        int minNext = h[curr.first][curr.second];
        string moveDir;
        
        for(int i = 0; i < 8; i++) {
            int nx = curr.first + dx[i];
            int ny = curr.second + dy[i];
            
            if(isValid(nx, ny, n, m)) {
                if(h[nx][ny] < minNext) {
                    minNext = h[nx][ny];
                    next = {nx, ny};
                    moveDir = dir[i];
                }
            }
        }
        
        if(next.first == -1 || h[next.first][next.second] >= h[curr.first][curr.second]) {
            cout << "NO\n";
            return 0;
        }
        
        path.push_back(moveDir);
        curr = next;
    }
    
    cout << "YES\n";
    for(size_t i = 0; i < path.size(); i++) {
        cout << path[i];
        if(i < path.size() - 1) cout << "+";
    }
    cout << "\n";
    
    return 0;
}
