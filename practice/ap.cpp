#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t, r, s;
    int arr[n][4];
    for (int i = 0; i < n; i++) {
        cin >> t >> r >> s;
        arr[i][0] = i + 1;
        arr[i][1] = t;
        arr[i][2] = r;
        arr[i][3] = s;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i][1] > arr[i + 1][1]){
            cout << arr[i] << endl;
        }else if (arr[i][1] < arr[i + 1][1]){
            cout << arr[i + 1] << endl;
        }else if (arr[i][1] == arr[i + 1][1]){
            if (arr[i][2] > arr[i + 1][2]){
                cout << arr[i] << endl;
            }else if (arr[i][2] < arr[i + 1][2]){
                cout << arr[i + 1] << endl;
            }else if (arr[i][2] == arr[i + 1][2]){
                cout << arr[i] << endl;
            }
        }
    }


    return 0;
}