#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int main() {
    int x;
    for (int i = 0; i < 3; i++) {
        cin >> x;
        arr.push_back(x);
    }

    return 0;
}