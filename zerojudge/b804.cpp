#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    vector<vector<int> > farm;
    int N;
    
    // 计算特定矩形区域的分数
    int calculateArea(int x1, int y1, int x2, int y2) {
        int sum = 0;
        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                sum += farm[i][j];
            }
        }
        return sum;
    }
    
    // 检查两个矩形是否重叠
    bool isOverlapping(int x1, int y1, int x2, int y2, 
                      int x3, int y3, int x4, int y4) {
        return !(x2 < x3 || x4 < x1 || y2 < y3 || y4 < y1);
    }
    
    // 检查新矩形是否与已选矩形重叠
    bool hasOverlap(const vector<vector<int> >& selected, 
                   int x1, int y1, int x2, int y2) {
        for (const auto& rect : selected) {
            if (isOverlapping(x1, y1, x2, y2, 
                            rect[0], rect[1], rect[2], rect[3])) {
                return true;
            }
        }
        return false;
    }
    
    // 使用回溯法寻找最大得分
    void findMaxScore(int startX, int startY, int currentScore,
                     vector<vector<int> >& selected, int& maxScore) {
        maxScore = max(maxScore, currentScore);
        
        // 尝试所有可能的矩形
        for (int x1 = startX; x1 < N; x1++) {
            for (int y1 = (x1 == startX ? startY : 0); y1 < N; y1++) {
                for (int x2 = x1; x2 < N; x2++) {
                    for (int y2 = y1; y2 < N; y2++) {
                        // 检查是否与已选矩形重叠
                        if (!hasOverlap(selected, x1, y1, x2, y2)) {
                            int areaScore = calculateArea(x1, y1, x2, y2);
                            selected.push_back(vector<int>{x1, y1, x2, y2});
                            findMaxScore(x1, y2 + 1, currentScore + areaScore, 
                                       selected, maxScore);
                            selected.pop_back();
                        }
                    }
                }
            }
        }
    }

public:
    int getMaxScore(vector<vector<int>>& farmland) {
        farm = farmland;
        N = farm.size();
        int maxScore = 0;
        vector<vector<int>> selected;
        findMaxScore(0, 0, 0, selected, maxScore);
        return maxScore;
    }
};

int main() {
    int N;
    cin >> N;
    
    // 读取农场数据
    vector<vector<int>> farmland(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> farmland[i][j];
        }
    }
    
    Solution solution;
    int x = solution.getMaxScore(farmland);
    cout << x << endl;
    
    return 0;
}