#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculate(int a, int b, int c, int op1, int op2) {
    int first;
    // 第一個運算
    switch(op1) {
        case 0: first = a + b; break;
        case 1: first = a - b; break;
        case 2: first = a * b; break;
        case 3: first = a / b; break;
    }
    
    // 第二個運算
    switch(op2) {
        case 0: return first + c;
        case 1: return first - c;
        case 2: return first * c;
        case 3: return first / c;
    }
    return 0;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    vector<int> xs;
    // 嘗試所有運算組合
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if((i == 3 && b == 0) || (j == 3 && c == 0)) continue;
            xs.push_back(calculate(a, b, c, i, j));
        }
    }
    
    // 輸出最小值
    cout << *min_element(xs.begin(), xs.end()) << "\n";
    return 0;
}