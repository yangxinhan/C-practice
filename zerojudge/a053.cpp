#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 10) {
        n *= 6;
    }else if (n <= 20) {
        n = 60 + (n - 10) * 2;
    }else if (n <= 40) {
        n = 80 + (n - 20);
    }else if (n > 40) {
        n = 60 +20 + 20;
    }
    cout << n;

    return 0;
}