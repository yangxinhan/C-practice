#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);

    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

    for (int x = 0; x < H; x++) {
        for (int y = 0; y < W; y++) {
            if (grid[x][y] == '.') {
                int count = 0;
                for (int d = 0; d < 8; d++) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];
                    if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
                        if (grid[nx][ny] == '#') {
                            count++;
                        }
                    }
                }
                grid[x][y] = count + '0';
            }
        }
    }

    for (int i = 0; i < H; i++) {
        cout << grid[i] << endl;
    }

    return 0;
}