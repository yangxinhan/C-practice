#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    if (n <= 1000000000 && n >= -1000000000) {
        if (n %2  == 0) {
            cout << "Even";
        }else if (n %2  == 1) {
            cout << "Odd";
        }else {
            cout << "X";
        }
    }
    

    return 0;
}