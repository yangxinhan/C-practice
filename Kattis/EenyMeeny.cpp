#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct Team {
    vector<string> members;
    bool isFirstTeam;
    Team() : isFirstTeam(false) {}
};

pair<Team, Team> solveTeamSelection(const string& rhyme, vector<string>& kids) {
    Team team1, team2;
    vector<bool> used(kids.size(), false);
    
    // 計算韻文單詞數
    istringstream iss(rhyme);
    string word;
    int wordCount = 0;
    while (iss >> word) wordCount++;
    
    int pos = -1;
    int remaining = kids.size();
    bool firstTeam = true;
    
    // 模擬數數遊戲
    while (remaining > 0) {
        int steps = wordCount;
        while (steps > 0) {
            pos = (pos + 1) % kids.size();
            if (!used[pos]) steps--;
        }
        
        used[pos] = true;
        remaining--;
        
        // 分配到對應隊伍
        if (firstTeam) {
            team1.members.push_back(kids[pos]);
            if (team1.members.size() == 1) {
                team1.isFirstTeam = true;
            }
        } else {
            team2.members.push_back(kids[pos]);
            if (team2.members.size() == 1 && !team1.isFirstTeam) {
                team2.isFirstTeam = true;
            }
        }
        
        firstTeam = !firstTeam;
    }
    
    return make_pair(team1, team2);
}

int main() {
    string rhymeLine;
    getline(cin, rhymeLine);
    vector<string> rhyme;
    stringstream ss(rhymeLine);
    string word;
    while (ss >> word) {
        rhyme.push_back(word);
    }

    int n;
    cin >> n;
    cin.ignore();

    vector<string> kids;
    for (int i = 0; i < n; i++) {
        string name;
        getline(cin, name);
        kids.push_back(name);
    }
 
    auto [team1, team2] = solveTeamSelection(rhymeLine, kids);

    // 先輸出第一個選手所在的隊伍
    if (team1.isFirstTeam) {
        cout << team1.members.size() << "\n";
        for (const string& member : team1.members) {
            cout << member << "\n";
        }
        cout << team2.members.size() << "\n";
        for (const string& member : team2.members) {
            cout << member << "\n";
        }
    } else {
        cout << team2.members.size() << "\n";
        for (const string& member : team2.members) {
            cout << member << "\n";
        }
        cout << team1.members.size() << "\n";
        for (const string& member : team1.members) {
            cout << member << "\n";
        }
    }
    
    return 0;
}