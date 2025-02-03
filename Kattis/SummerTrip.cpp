#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int count = 0;
    int n = s.length();
    vector<vector<bool> > seen(26, vector<bool>(n, false));

    for(int i = 0; i < n; i++) {
        if(i > 0) {
            for(int c = 0; c < 26; c++) {
                seen[c][i] = seen[c][i-1];
            }
        }
        seen[s[i]-'a'][i] = true;
    }

    for(int i = 0; i < n-1; i++) {
        for(char c = 'a'; c <= 'z'; c++) {
            if(c != s[i] && seen[c-'a'][n-1] && !seen[s[i]-'a'][i+1]) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}