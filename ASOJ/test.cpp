#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int minDiff(vector<int>& apples, int idx, int sum1, int totalSum) {
    if (idx == apples.size()) {
        return abs(sum1 - (totalSum - sum1));
    }
    
    // 分配給第一個人或第二個人
    return min(
        minDiff(apples, idx + 1, sum1 + apples[idx], totalSum),
        minDiff(apples, idx + 1, sum1, totalSum)
    );
}

int main() {
    int n;
    cin >> n;
    vector<int> apples(n);
    for (int i = 0; i < n; i++) {
        cin >> apples[i];
    }
    

    int totalSum = accumulate(apples.begin(), apples.end(), 0);
    cout << minDiff(apples, 0, 0, totalSum) << endl;
    
    cout<< 'hollow world'<<endl;
    return 0;
}