#include <iostream>
#include <string>
#include <map>
using namespace std;

string getKeyPresses(char c) {
    static const map<char, string> keyMap = {
        {'a', "2"},   {'b', "22"},  {'c', "222"},
        {'d', "3"},   {'e', "33"},  {'f', "333"},
        {'g', "4"},   {'h', "44"},  {'i', "444"},
        {'j', "5"},   {'k', "55"},  {'l', "555"},
        {'m', "6"},   {'n', "66"},  {'o', "666"},
        {'p', "7"},   {'q', "77"},  {'r', "777"},  {'s', "7777"},
        {'t', "8"},   {'u', "88"},  {'v', "888"},
        {'w', "9"},   {'x', "99"},  {'y', "999"},  {'z', "9999"},
        {' ', "0"}
    };
    
    try {
        return keyMap.at(tolower(c));
    } catch (const out_of_range& e) {
        return "";  // 處理非法字符
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    cin.ignore();

    for (int case_num = 1; case_num <= n; case_num++) {
        string message;
        getline(cin, message);
        
        cout << "Case #" << case_num << ": ";
        string prev = "";
        
        for (char c : message) {
            string current = getKeyPresses(c);
            if (current.empty()) continue;  // 跳過非法字符
            
            if (!prev.empty() && current[0] == prev[0]) {
                cout << " ";
            }
            cout << current;
            prev = current;
        }
        cout << endl;
    }
    return 0;
}