#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;
void run() {
    if (nums.size() < 10000) {
        for (int i = 1; i < 10000; i++) {
            for (int j = 0; j < i; j++) {
                nums.push_back(1);
            }
            for (int j = 0; j < i; j++) {
                nums.push_back(2);
            }
            for (int j = 0; j < i; j++) {
                nums.push_back(3);
            }
            for (int j = 0; j < i; j++) {
                nums.push_back(0);
            }
        }
    }
    
}

int main() {
    run();
    int n, x, a;
    cin >> n;
    nums.push_back(9);
    for (int i = 0; i < n; i++) {
        cin >> x;
        a = nums[x - 1];
        if (a == 1) {
            cout << "Pen" << endl;
        } else if (a == 2) {
            cout << "Pineapple" << endl;
        } else if (a == 3) {
            cout << "Apple" << endl;
        } else {
            cout << "Pineapple Pen" << endl;
        }
    }
}