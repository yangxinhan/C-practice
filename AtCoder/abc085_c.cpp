#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int N, Y;
    cin >> N >> Y;
    int x, y, z;
    for (x = 0; x <= N / 10; x++) {
        for (y = 0; y <= N / 5; y++) {
            z = N - 10 * x - 5 * y;
            if (z >= 0 && 10000 * x + 5000 * y + 1000 * z == Y) {
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    
    return 0;
}