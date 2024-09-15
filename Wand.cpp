#include <iostream>
using namespace std;

int main() {
    int n, k, x, y, z, w, min = 10000000;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if(i == j){
                continue;
            }
            x = a[i];
            y = a[j];
            z = x * y;
            if ((k - z) < 0) {
                w = (k - z) * -1;
            }else{
                w = (k - z);
            }
            if(w < min){
                min = w;
            }
        }
        
    }
    cout << min << endl;
    return 0;
}