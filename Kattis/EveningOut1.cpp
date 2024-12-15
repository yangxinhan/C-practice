#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    

    if (b <= 0) {
        cout << 0 << "\n";
        return 0;
    }
    

    long long n = abs(a % b);
    
    cout << min(n, b - n) << "\n";
    
    return 0;
}