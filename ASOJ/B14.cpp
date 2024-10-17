#include <iostream>
#include <string>
using namespace std;

int main() {
    int h, m, t;
    string s;
    cin >> h >> m >> s >> t;
    if (t > 0) {
        h = h + 1 * t;
        m = m + 30 *t;
        if (m >= 60) {
            m = m - 60;
            h += 1;
        }
        if (h >= 24) {
            h -= 24;
        }
    }else if (t < 0) {
        h = h - 1 * t;
        m = m - 30 * t;
        if (m < 0) {
            m = m + 60;
            h -= 1;
        }
        if (h < 0) {
            h += 24;
        }
    }
    cout << h << ":" << m << ":" << s;
    

    return 0;
}