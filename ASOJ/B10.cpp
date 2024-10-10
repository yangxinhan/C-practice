#include <iostream>
using namespace std;

int main() {
    int x, y, a, b, t;
    int arr[4][2];
    for (int i = 0; i < 4; i++) {
        cin >> x >> y;
        arr[i][0] = x;
        arr[i][1] = y;
    }

    cin >> a >> b;
    for (int i = 0; i < 4; i++) {
        if (arr[i][0] < x or arr[i][1] < y) {
            t = 1;
        } else {
            t = 0;
            return t;
        }
    }
    if (t == 1) {
        cout << "OUT" << endl;
    } else {
        cout << "IN" << endl;
    }

    return 0;
}