#include <iostream>
using namespace std;
#define endl "\n"

int main() {
    int n, x, all = 0, i = 0;
     cin >> n;
     int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    while (all < x) {
        all += a[i % n];
        i++;
    }
    cout << i << endl;

   return 0;
}