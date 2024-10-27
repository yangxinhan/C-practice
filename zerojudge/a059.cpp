#include <iostream>
#include <cmath>
#define endl "\n"
using namespace std;

int main() {
    int t, a, b, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a;
        cin >> b;
        for (int j = a; j <= b; j++) {
            if (sqrt(j) == int(sqrt(j))) {
                
                n+= int(j);
                cout << n << endl;
            }
        }
        cout << "Case: " << i + 1 << n << endl;
        n = 0;
    }

    return 0;
}