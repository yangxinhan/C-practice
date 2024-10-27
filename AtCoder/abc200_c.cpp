#include <iostream>
using namespace std;

int main() {
    int n, all = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }else {
                if(arr[i] - arr[j] >= 200 || arr[i] - arr[j] <= -200) {
                    if (arr[i] - arr[j] %200 == 0) {
                        all++;
                    }
                }else if (arr[i] - arr[j] == 0) {
                    all++;
                }
            }
            
        }
    }
    cout << all << endl;

    return 0;
}