#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char> > grid(r, vector<char>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid[i][j];
        }
    }
    vector<vector<bool> > visited(r, vector<bool>(c, false));
    
    int moves = 0;
    int x = 0, y = 0;
    
    while (true) {
        if (x < 0 || x >= r || y < 0 || y >= c) {
            cout << "Out" << endl;
            return 0;
        }
        if (grid[x][y] == 'T') {
            cout << moves << endl;
            return 0;
        }
        if (visited[x][y]) {
            cout << "Lost" << endl;
            return 0;
        }
        
        visited[x][y] = true;

        switch (grid[x][y]) {
            case 'N': x--; break;
            case 'S': x++; break;
            case 'W': y--; break;
            case 'E': y++; break;
        }
        
        moves++;
    }
    
    return 0;
}