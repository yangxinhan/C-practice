#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n], k;
    char m[n];
    string s;
    for (int i = 0; i < n; i++) {
        cin >> m[i] >> a[i] >> b[i];
        if (m[i] == 'A') {
            a[i] = 1;
            b[i] = 0;
        } else {
            a[i] = 0;
            b[i] = 1;
        }
    }
    cin >> k;
    cin >> s;
    for (int i = 1; i < k; i++) {
        
    }
    
    return 0;
}