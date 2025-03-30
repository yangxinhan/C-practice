#include <iostream>
#include <vector>
using namespace std;

int main() {
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) break;

        vector<int> jack(n), jill(m);
        for (int i = 0; i < n; ++i) cin >> jack[i];
        for (int i = 0; i < m; ++i) cin >> jill[i];

        int i = 0, j = 0, common = 0;
        while (i < n && j < m) {
            if (jack[i] == jill[j]) {
                ++common;
                ++i;
                ++j;
            } else if (jack[i] < jill[j]) {
                ++i;
            } else {
                ++j;
            }
        }

        cout << common << endl;
    }

    return 0;
}