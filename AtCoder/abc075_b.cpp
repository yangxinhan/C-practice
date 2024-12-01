#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c;
            cin >> c;
            a[i][j] = c;
        }
    }

    return 0;
}