#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if(n % k == 0) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }

    return 0;
}