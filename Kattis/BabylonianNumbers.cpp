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
        
        long long result = 0;
        for (int i = 0; i < numbers.size(); i++) {
            result += numbers[i] * pow(60, numbers.size() - 1 - i);
        }
        
        cout << result << endl;
    }
    return 0;
}