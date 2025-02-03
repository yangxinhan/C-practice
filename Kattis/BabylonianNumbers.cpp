#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string input;
    while (getline(cin, input)) {
        vector<long long> numbers;
        stringstream ss(input);
        string token;
        
        while (getline(ss, token, ',')) {
            if (token.empty()) {
                numbers.push_back(0);
                cout << numbers[numbers.size() - 1] << endl;
            } else {
                numbers.push_back(stoll(token));
            }
        }
        
        long long x = 0;
        for (int i = 0; i < numbers.size(); i++) {
            x += numbers[i] * pow(60, numbers.size() - 1 - i);
        }
        
        cout << x << endl;
    }
    return 0;
}