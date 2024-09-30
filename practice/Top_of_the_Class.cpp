#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    int t[n];
    int max = 0, maxid = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> t[i];
        // cout << s[i] << " " << t << endl;
    }
    for (int i = 0; i < n; i++) {
        if (t[i] > max) {
            max = t[i];
            maxid = i;
        }
    }
    cout << s[maxid];

    return 0;
}