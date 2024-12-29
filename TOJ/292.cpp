#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int decimal = 0;
    int temp = c;
    int x = 0;
    while (temp > 0) {
        decimal += (temp % 10) * pow(a, x);
        temp /= 10;
        x++;
    }
    
    string result = "";
    while (decimal > 0) {
        result = to_string(decimal % b) + result;
        decimal /= b;
    }
    
    if (c == 0) {
        cout << "0\n";
    } else {
        cout << result << "\n";
    }
    
    return 0;
}