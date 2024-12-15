#include <iostream>
using namespace std;

int main() {
    int n, D, x, num = 0;
    bool flag = true;
    cin >> n >> D;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    x = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] >= x + D && flag == true) {
            num += arr[i] - x;
            x = arr[i];
            flag = false;
        }else if(arr[i] <= x - D && flag == false) {
            flag = true;
            x = arr[i];
        }
    }
    cout << num << "\n";
    return 0;

}