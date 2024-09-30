#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    int min_val = *min_element(numbers.begin(), numbers.end());
    int max_val = *max_element(numbers.begin(), numbers.end());
    ll product = static_cast<ll>(min_val) * max_val;
    
    cout << min_val << " " << max_val << " " << product << endl;
    
    return 0;
}