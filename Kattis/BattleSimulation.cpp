#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isCombo(const string& str, int start) {
    if (start + 2 >= str.length()) return false;
    string temp = str.substr(start, 3);
    sort(temp.begin(), temp.end());
    return temp == "BLR";
}

char getCounter(char move) {
    switch (move) {
        case 'R': return 'S';
        case 'B': return 'K';
        case 'L': return 'H';
        default: return ' ';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string moves;
    cin >> moves;
    string result;
    
    for (int i = 0; i < moves.length(); i++) {
        if (i + 2 < moves.length() && isCombo(moves, i)) {
            result += 'C';
            i += 2;  // 跳過組合中的另外兩個動作
        } else {
            result += getCounter(moves[i]);
        }
    }
    
    cout << result << '\n';
    return 0;
}