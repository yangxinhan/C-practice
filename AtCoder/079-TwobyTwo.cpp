#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w], b[h][w];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> b[i][j];
        }
    }
    

    return 0;
}