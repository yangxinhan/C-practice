#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    int arr[2][3] = {{1, 1000, 100},
                     {0, 2000, 200}};
    cin >> n;
    a = n - ((n / arr[0][1]) * arr[0][2]);
    b = n - ((n / arr[1][1]) * arr[1][2]);
    if (a < b) {
        cout << a << " " << arr[0][0];
    }else if (a > b) {
        cout << b << " " << arr[1][0];
    }else if (a == b) {
        cout << a << " " << arr[1][0];
    }
    return 0;
}