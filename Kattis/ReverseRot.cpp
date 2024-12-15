#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string encode(string s, int n) {

    string valid = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

    reverse(s.begin(), s.end());

    string result;
    for (char c : s) {
        int pos = valid.find(c);
        pos = (pos + n) % 28;
        result += valid[pos];
    }
    
    return result;
}

int main() {
    int n;
    string s;
    
    while (cin >> n && n != 0) {
        cin >> s;
        cout << encode(s, n) << endl;
    }
    
    return 0;
}