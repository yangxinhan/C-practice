#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    vector<char> v;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '6') {
            v.insert(v.begin(), '9');
        } else if (s[i] == '9') {
            v.insert(v.begin(), '6');
        } else {
            v.insert(v.begin(), s[i]);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }

    return 0;
}