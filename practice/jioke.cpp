#include <iostream>
using namespace std;

int main() {
  	int n, m, k, q, r, c, v, all = 0;
  	cin >> n >> m;
  	int a[n][m];
  	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
      		cin >> a[i][j];
    	}
  	}

    cin >> k >> q;
    for(int i = 0; i < k + q; i++){
        cin >> v >> r >> c;
        if(v == 1){
            all += a[r - 1][c - 1];
        }else{
            cout << all << endl;
            all = 0;
        }
    }
	
    return 0;
}