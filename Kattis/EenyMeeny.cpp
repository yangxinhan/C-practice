#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// 定義團隊結構
struct Team {
    vector<string> members;
    bool first = false;  // 標記是否為第一個形成的團隊
};

// 模擬一輪念詞選人
int countRhyme(const vector<string>& rhyme, int start, int remaining) {
    int pos = start;
    for (const string& word : rhyme) {
        if (remaining == 0) break;
        pos = (pos + 1) % remaining;
    }
    return pos;
}

// 解決團隊選擇問題的主要函數
pair<Team, Team> solveTeamSelection(const vector<string>& rhyme, vector<string>& kids) {
    Team team1, team2;
    vector<bool> selected(kids.size(), false);  // 記錄每個小孩是否已被選擇
    int remainingKids = kids.size();  // 剩餘未被選擇的小孩數量
    int currentPos = 0;  // 從第一個小孩開始
    bool firstTeamFormed = false;  // 是否已確定第一個團隊
    
    // 持續直到所有小孩都被分配到團隊
    while (remainingKids > 0) {
        // 找出下一個被選中的小孩位置
        int selectedPos = countRhyme(rhyme, currentPos, remainingKids);
        
        // 找出實際被選中的小孩（考慮已被選走的小孩）
        int actualKidIndex = -1;
        int count = 0;
        for (int i = 0; i < kids.size(); i++) {
            if (!selected[i]) {
                if (count == selectedPos) {
                    actualKidIndex = i;
                    break;
                }
                count++;
            }
        }
        
        // 標記該小孩為已選擇
        selected[actualKidIndex] = true;
        string selectedKid = kids[actualKidIndex];
        
        // 決定將小孩分配到哪個團隊
        if (remainingKids % 2 == 0) {  // 剩餘人數為偶數時分配到第二隊
            team2.members.push_back(selectedKid);
            if (!firstTeamFormed) {
                team1.first = true;
                firstTeamFormed = true;
            }
        } else {  // 剩餘人數為奇數時分配到第一隊
            team1.members.push_back(selectedKid);
            if (!firstTeamFormed) {
                team2.first = true;
                firstTeamFormed = true;
            }
        }
        
        // 更新剩餘小孩數量和當前位置
        remainingKids--;
        currentPos = selectedPos;
    }
    
    return {team1, team2};
}

int main() {
    // 讀取念詞
    string rhymeLine;
    getline(cin, rhymeLine);
    vector<string> rhyme;
    stringstream ss(rhymeLine);
    string word;
    while (ss >> word) {
        rhyme.push_back(word);
    }
    
    // 讀取小孩數量
    int n;
    cin >> n;
    cin.ignore();  // 清除換行符
    
    // 讀取小孩名字
    vector<string> kids;
    for (int i = 0; i < n; i++) {
        string name;
        getline(cin, name);
        kids.push_back(name);
    }
    
    // 解決問題
    auto [team1, team2] = solveTeamSelection(rhyme, kids);
    
    // 按照要求順序輸出結果
    if (team1.first) {
        cout << team1.members.size();
        for (const string& member : team1.members) {
            cout << " " << member;
        }
        cout << endl;
        cout << team2.members.size();
        for (const string& member : team2.members) {
            cout << " " << member;
        }
        cout << endl;
    } else {
        cout << team2.members.size();
        for (const string& member : team2.members) {
            cout << " " << member;
        }
        cout << endl;
        cout << team1.members.size();
        for (const string& member : team1.members) {
            cout << " " << member;
        }
        cout << endl;
    }
    
    return 0;
}